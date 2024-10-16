/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 08:02:54 by marianga          #+#    #+#             */
/*   Updated: 2024/07/18 08:04:52 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	char	number;
	long	n;
	int		count;

	n = nb;
	count = 0;
	if (n < 0)
	{
		n *= -1;
		count += ft_putchar('-');
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	number = 48 + (n % 10);
	count += ft_putchar(number);
	return (count);
}

int	ft_put_uint(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_put_uint(n / 10);
	count += ft_putchar(48 + (n % 10));
	return (count);
}

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (ft_putstr("(null)"));
	count = 0;
	while (*str != '\0')
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}

int	ft_puthexa(unsigned int n, char c)
{
	int		count;
	char	*s;

	if (c == 'x')
		s = "0123456789abcdef";
	else
		s = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
		count += ft_puthexa(n / 16, c);
	count += ft_putchar(s[n % 16]);
	return (count);
}

int	ft_putptr(unsigned long int n)
{
	int		count;
	char	*s;

	s = "0123456789abcdef";
	count = 0;
	if (n == 0)
		return (0);
	if (n > 15)
		count += ft_putptr(n / 16);
	count += ft_putchar(s[n % 16]);
	return (count);
}
