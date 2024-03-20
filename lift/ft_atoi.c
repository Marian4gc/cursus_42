/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:30:23 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 11:52:25 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int main()
{
    const char *str1 = "  1234";
    int num1 = ft_atoi(str1);
    printf("Cadena: \"%s\", Entero: %d\n", str1, num1);

	const char *str2 = "-6789";
    int num2 = ft_atoi(str2);
    printf("Cadena: \"%s\", Entero: %d\n", str2, num2);

	const char *str3 = "   +42";
    int num3 = ft_atoi(str3);
    printf("Cadena: \"%s\", Entero: %d\n", str3, num3);

    return 0;
}*/
