/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:23:51 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 15:05:59 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = s1;
	const unsigned char	*p2 = s2;

	if (n == 0)
		return (0);
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*int main()
{
    char s[10] = "casa";
    char s2[10] = "caso";
    printf("%d\n", ft_memcmp(s, s2, 4));

	char p[10] = "cosas";
    char p2[10] = "mio";
	printf("%d\n", ft_memcmp(p, p2, 4));
	
	char t[10] = "casa";
    char t2[10] = "perros";
	printf("%d\n", ft_memcmp(t, t2, 4));
    return 0;
}*/