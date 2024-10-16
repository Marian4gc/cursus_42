/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:21:56 by marianga          #+#    #+#             */
/*   Updated: 2024/07/24 13:04:17 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_actualize_rest_text(char *rest_text, char *buffer)
{
	char	*temp;

	if (!rest_text)
		rest_text = ft_strdup(buffer);
	else
	{
		temp = ft_strjoin(rest_text, buffer);
		free(rest_text);
		rest_text = temp;
	}
	return (rest_text);
}

static char	*ft_read_to_buffer(int fd, char *buffer, char *rest_text)
{
	int		bytes_read;
	int		found_newline;

	found_newline = 0;
	bytes_read = 1;
	while (bytes_read > 0 && !found_newline)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		buffer[bytes_read] = '\0';
		rest_text = ft_actualize_rest_text(rest_text, buffer);
		if (!rest_text)
			return (NULL);
		if (ft_strchr(buffer, '\n'))
			found_newline = 1;
	}
	return (rest_text);
}

static char	*ft_read_and_keep(int fd, char *rest_text)
{
	char	*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buffer == NULL)
		return (NULL);
	rest_text = ft_read_to_buffer(fd, buffer, rest_text);
	free(buffer);
	return (rest_text);
}

static char	*ft_extract_line(char **rest_text)
{
	char	*line;
	char	*temp;
	size_t	len;

	if (!*rest_text)
		return (NULL);
	len = 0;
	while ((*rest_text)[len] != '\n' && (*rest_text)[len] != '\0')
		len++;
	if ((*rest_text)[len] == '\n')
	{
		line = ft_substr(*rest_text, 0, len + 1);
		temp = ft_strdup(*rest_text + len + 1);
		free(*rest_text);
		*rest_text = temp;
	}
	else
	{
		line = ft_strdup(*rest_text);
		free(*rest_text);
		*rest_text = NULL;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*rest_text;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest_text = ft_read_and_keep(fd, rest_text);
	if (!rest_text)
		return (NULL);
	line = ft_extract_line(&rest_text);
	if (!line || line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

/* int main(void)
{
    int fd;
    char *line;

    // Abre el archivo en modo de solo lectura
    fd = open("gnlTester/files/big_line_no_nl", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    // Lee y muestra cada línea del archivo
	//fd = 444;
	line = get_next_line(fd);

	if (line == NULL)
		printf("Ha devuelto NULL\n");
	
    while (line != NULL)
    {
		printf("%s", line);
        free(line); // Libera la memoria de la línea leída
		line = get_next_line(fd);
    }

    // Cierra el archivo
    close(fd);
    return (0);
} */
