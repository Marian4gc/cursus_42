/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:08:59 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 12:59:51 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*int main()
{
	char dest[30] = "adios";
    char src[30] = "hola";
    size_t dstsize = sizeof(dest);
	printf("Ejemplo 1: %lu\n", ft_strlcat(dest, src, dstsize));
    printf("dest: %s\n", dest);

	char dest2[5] = "abc";
    char src2[] = "def";
    size_t dstsize2 = sizeof(dest2);
    printf("Ejemplo 2: %lu\n", ft_strlcat(dest2, src2, dstsize2));
    printf("dest: %s\n", dest2);
	return (0);
}*/