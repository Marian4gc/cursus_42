/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:39:48 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 16:46:07 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*int main()
{
    char str1[10] = "hola";
    char str2[10] = "mundo";
    printf("%s\n", ft_strjoin(str1, str2));

	char *s1 = NULL;
    char s2[10] = "mundo";
    printf("%s\n", ft_strjoin(s1, s2));

	char s3[10] = "HOLA";
    char *s4 = NULL;
    printf("%s\n", ft_strjoin(s3, s4));
    return (0);
}*/
