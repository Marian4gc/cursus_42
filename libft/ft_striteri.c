/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:50:03 by marianga          #+#    #+#             */
/*   Updated: 2024/03/19 16:50:08 by marianga         ###   ########.fr       */
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