/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:36:37 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 12:27:53 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int main()
{
    char src[] = "Helloooooooo!";
    char dest[50] = "Byeeeeeee!";
	printf("Antes de la copia:\n");
    printf("src: %s\n", src);
    printf("dest: %s\n", dest);
    ft_memmove(dest + 7, src, 5);
    printf("\nDespués de la copia:\n");
    printf("dest: %s\n", dest);
    return 0;
}*/
