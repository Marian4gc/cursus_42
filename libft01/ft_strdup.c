/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:19:13 by marianga          #+#    #+#             */
/*   Updated: 2024/03/12 15:07:58 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main()
{
    char *str;
    char *copy;

    //
    str = "casa grande";
    copy = ft_strdup(str);
    if (copy == NULL)
    {
        printf("Failed to duplicate str.\n");
        return 1;
    }
    printf("Duplicated normal string: %s\n", copy);
    free(copy);

    //
    str = "";
    copy = ft_strdup(str);
    if (copy == NULL)
    {
        printf("Failed to duplicate str.\n");
        return 1;
    }
    printf("Duplicated empty string: %s\n", copy);
    free(copy);

    // 
    str = "a";
    copy = ft_strdup(str);
    if (copy == NULL)
    {
        printf("Failed to duplicate str.\n");
        return 1;
    }
    printf("Duplicated single character: %s\n", copy);
    free(copy);

    return 0;
}*/