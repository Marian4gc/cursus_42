/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:23:38 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 13:09:05 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int main()
{
    char str[10] = "casa";
	char str2[10] = "hello";
    char str3[10] = "world";
    
	printf("Ejemplo 1:\n");
    printf("Resultado: %s\n", ft_strchr(str1, 'o'));

	printf("\nEjemplo 2:\n");
    printf("Resultado: %s\n", ft_strchr(str2, 'l'));

	printf("\nEjemplo 3:\n");
    printf("Resultado: %s\n", ft_strchr(str3, 'o'));

    return (0);
}*/
