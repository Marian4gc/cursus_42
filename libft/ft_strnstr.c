/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:48:18 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 15:26:49 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    char str[20] = "casa sabrosa";
    char str2[10] = "sa";
    printf("%s\n", ft_strnstr(str, str2, 8));

	char s[20] = "casa sabrosa";
    char s2[10] = "pe";
    printf("%s\n", ft_strnstr(s, s2, 8));

    return (0);
}*/