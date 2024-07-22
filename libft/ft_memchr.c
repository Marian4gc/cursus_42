/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:37 by marianga          #+#    #+#             */
/*   Updated: 2024/03/08 16:08:22 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}

/*int main(void)
{
    char str1[10] = "casa";
    printf("%c\n", *(char *)ft_memchr(str1, 's', 4));
    
	char str2[10] = "victoria";
	printf("%c\n", *(char *)ft_memchr(str2, 'v', 8));

	char str3[10] = "";
	printf("%c\n", *(char *)ft_memchr(str3, 'v', 0));	
    return (0);
}*/