/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:23:47 by marianga          #+#    #+#             */
/*   Updated: 2024/07/22 13:01:17 by marianga         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;
    
    if(!str)
        return(0);
    if(str == NULL)
        return (NULL);
    len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while(*(dest +1))
		i++;
	while (*src)
	{
		*(dest +1) = *src;
		src++;
		i++;
	}
	*(dest +i) = '\0';
	return(dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}
