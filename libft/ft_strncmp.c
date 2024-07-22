/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:37 by marianga          #+#    #+#             */
/*   Updated: 2024/03/12 14:30:57 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
	char s1[] = "hola";
	char s2[] = "hola";
	size_t n = 4;

	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("   strncmp: %d\n", strncmp(s1, s2, n));

	char s3[] = "";
	char s4[] = "hola";
	n = 4;

	printf("ft_strncmp: %d\n", ft_strncmp(s3, s4, n));
	printf("   strncmp: %d\n", strncmp(s3, s4, n));

	char *s5 = NULL;
	char s6[] = "hola";
	n = 4;

	printf("ft_strncmp: %d\n", ft_strncmp(s5, s6, n));
	printf("   strncmp: %d\n", strncmp(s5, s6, n));

	return (0);
}*/