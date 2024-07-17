/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:16:09 by marianga          #+#    #+#             */
/*   Updated: 2024/07/17 11:43:40 by marianga         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_print_pointer(unsigned long ptr)
{
    int count;

	count = 0;
    if (ptr == 0)
        count += ft_putstr("(nil)");
    else
    {
        count += ft_putstr("0x");
        count += ft_putptr(ptr);
    }
    return (count);
}

int ft_set_print(char c, va_list list)
{
    int count;
	unsigned long ptr;

	count = 0;
    if (c == 'c')
        count += ft_putchar(va_arg(list, int));
    else if (c == 's')
        count += ft_putstr(va_arg(list, char *));
    else if (c == 'd' || c == 'i')
        count += ft_putnbr(va_arg(list, int));
    else if (c == 'u')
        count += ft_put_uint(va_arg(list, unsigned int));
    else if (c == '%')
        count += ft_putchar('%');
    else if (c == 'x' || c == 'X')
        count += ft_puthexa(va_arg(list, unsigned int), c);
	else if (c == 'p')
    {
        ptr = va_arg(list, unsigned long);
        count += ft_print_pointer(ptr);
    }
    return (count);
}

int	ft_check(char c)
{
	char	*s;
	int		i;

	s = "cspdiuxX%";
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		list;
	int			count;

	va_start(list, format);
	if (!format)
		return (0);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%' && ft_check(*(format + 1)))
        {
            format++;
            count += ft_set_print(*format, list);
        }
        else
            count += ft_putchar(*format);
        format++;
	}
	va_end(list);
	return (count);
}

/*int main() {
	char c = 'A';
	char *s = "Hello, World!";
	int d = -42;
	unsigned int u = 42;
	int x = 0x2a;
	int *p = &x;

	// Carácter
	printf("Original: '%c'\n", c);
	ft_printf("Copia:    '%c'\n", c);

	// Cadena
	printf("Original: '%s'\n", s);
	ft_printf("Copia:    '%s'\n", s);

	// Entero con signo
	printf("Original: '%d'\n", d);
	ft_printf("Copia:    '%d'\n", d);

	// Entero sin signo
	printf("Original: '%u'\n", u);
	ft_printf("Copia:    '%u'\n", u);

	// Porcentaje
	printf("Original: '%%'\n");
	ft_printf("Copia:    '%%'\n");

	// Hexadecimal minúsculas
	printf("Original: '%x'\n", x);
	ft_printf("Copia:    '%x'\n", x);

	// Hexadecimal mayúsculas
	printf("Original: '%X'\n", x);
	ft_printf("Copia:    '%X'\n", x);

	// Puntero
	printf("Original: '%p'\n", &x);
	ft_printf("Copia:    '%p'\n", &x);
	
	// Tres porcentajes
    printf("Original: '%%%d'\n", d);
    ft_printf("Copia:    '%%%d'\n", d);
	printf("Original: '%%%d'\n", c);
    ft_printf("Copia:    '%%%d'\n", c);

	return 0;
}*/

/*int main ()
{
    const char *puntero;
    printf("| len %d\n", printf("prueba char %c %c %c %c", 'H', 'o', 'l', 'a'));
    ft_printf("| len %d\n", ft_printf("prueba char %c %c %c %c", 'H', 'o', 'l', 'a'));
    printf("| len %d\n", printf("prueba string %s %s", "Hola", "mundo"));
    ft_printf("| len %d\n", ft_printf("prueba string %s %s", "Hola", "mundo"));
    printf("| len %d\n", printf("prueba puntero %p", puntero));
    ft_printf("| len %d\n", ft_printf("prueba puntero %p", puntero));
    printf("| len %d\n", printf("prueba int %%d %d %d %d", 10, 11, 12));
    ft_printf("| len %d\n", ft_printf("prueba int %%d %d %d %d", 10, 11, 12));
    printf("| len %d\n", printf("prueba int %%i %i %i %i", 10, 11, 12));
    ft_printf("| len %d\n", ft_printf("prueba int %%i %i %i %i", 10, 11, 12));
    printf("| len %d\n", printf("prueba int %%u %u %u %u", 10, 11, 12));
    ft_printf("| len %d\n", ft_printf("prueba int %%u %u %u %u", 10, 11, 12));
    printf("| len %d\n", printf("prueba hexadecimal %x", 42424242));
    ft_printf("| len %d\n", ft_printf("prueba hexadecimal %x", 42424242));
    printf("| len %d\n", printf("prueba HEXADECIMAL %X", 42424242));
    ft_printf("| len %d\n", ft_printf("prueba HEXADECIMAL %X", 42424242));
    printf("| len %d\n", printf("%p", (void *)-14523));
    ft_printf("| len %d\n", ft_printf("%p", (void *)-14523));
    return 0;
}*/
