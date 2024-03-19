/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:43:54 by marianga          #+#    #+#             */
/*   Updated: 2024/03/18 14:24:14 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

/*char	my_yupper(unsigned int i, char c)
{
	return (ft_toupper(c));
}

int main(void)
{
    char *str = "Hello 15323dds";
    char *new_str = ft_strmapi(str, my_yupper);
    printf("%s\n", new_str);
    free(new_str);
    return (0);
}*/

//gcc ft_strmapi.c ft_calloc.c ft_strlen.c ft_toupper.c ft_memset.c ft_strdup.c
// ft_bzero.c