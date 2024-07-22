/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:01:46 by marianga          #+#    #+#             */
/*   Updated: 2024/03/13 16:36:06 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_n(int count)
{
	int	index;

	index = 0;
	if (count <= 0)
		index++;
	while (count)
	{
		count = count / 10;
		index++;
	}
	return (index);
}

char	*ft_itoa(int n)
{
	int		index;
	int		size;
	char	*str;

	index = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = count_n(n);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	if (n == 0)
		str[0] = '0';
	str[size] = '\0';
	while (n)
	{
		str[size - index++] = ((n % 10) + '0');
		n = n / 10;
	}
	return (str);
}

/*int main(void)
{
    int n = 123;
    printf("%s\n", ft_itoa(n));

    int n1 = -123;
    printf("%s\n", ft_itoa(n1));

    int n2 = 0;
    printf("%s\n", ft_itoa(n2));

    int n3 = -2147483648;
    printf("%s\n", ft_itoa(n3));

    int n4 = 2147483647;
    printf("%s\n", ft_itoa(n4));

    return (0);
}*/