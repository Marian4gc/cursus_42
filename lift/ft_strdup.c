/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:19:13 by marianga          #+#    #+#             */
/*   Updated: 2024/03/20 16:21:27 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}

/*int main(void)
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