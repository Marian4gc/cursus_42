/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:50:35 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 16:33:23 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = (char *)malloc(1);
		if (sub != NULL)
			sub[0] = '\0';
		return (sub);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1);
	if (sub != NULL)
	{
		i = 0;
		while (i < len && s[start])
			sub[i++] = s[start++];
		sub[i] = '\0';
	}
	return (sub);
}

/*int main()
{
    char *s1 = "";
    char *sub1 = ft_substr(s1, 0, 5);
    printf("Subcadena 1: \"%s\"\n", sub1);
    free(sub1);

	char *s2 = "Hola, mundo!";
    char *sub2 = ft_substr(s2, 2, 5);
    printf("Subcadena 2: \"%s\"\n", sub2);
    free(sub2);

	char *s3 = "Esto es una cadena";
    char *sub3 = ft_substr(s3, 0, 4);
    printf("Subcadena 3: \"%s\"\n", sub3);
    free(sub3);

	char *s4 = "123456789";
    char *sub4 = ft_substr(s4, 5, 10);
    printf("Subcadena 4: \"%s\"\n", sub4);
    free(sub4);

	char *s5 = "Cadena";
    char *sub5 = ft_substr(s5, 3, 0);
    printf("Subcadena 5: \"%s\"\n", sub5);
    free(sub5);
	
    return (0);
}*/
