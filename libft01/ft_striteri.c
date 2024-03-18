/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:25:53 by marianga          #+#    #+#             */
/*   Updated: 2024/03/18 14:49:51 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}

/*void	my_yupper(unsigned int i, char *c)
{
	*c = ft_toupper(*c);
}
int	main(void)
{
	char	str[] = "Hola hmncoqmk";

	ft_striteri(str, my_yupper);
	printf("%s\n", str);
	return (0);
}*/

//gcc ft_striteri.c ft_toupper.c