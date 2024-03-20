/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:01:40 by marianga          #+#    #+#             */
/*   Updated: 2024/03/12 13:26:48 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	if (dest && src)
	{
		i = 0;
		if (size != 0)
		{
			while (src[i] != '\0' && i < (size - 1))
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
		return (srcsize);
	}
	return (0);
}

/*int main(void)
{
	char dest[30] = "adios";
	char src[30] = "hola";
	size_t size = 10;
	printf("%lu\n", ft_strlcpy(dest, src, size));
	printf("%lu\n", strlcpy(dest, src, size));
	printf("%s\n", dest);
	return (0);
}*/
