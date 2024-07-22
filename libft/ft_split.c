/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:49:38 by marianga          #+#    #+#             */
/*   Updated: 2024/03/21 14:42:25 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split, size_t count)
{
	while (count > 0)
	{
		count--;
		free(split[count]);
	}
}

static size_t	get_word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static char	**fill_split(char **split, char const *s, char c, size_t word_count)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	while (i < word_count)
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		split[i] = ft_substr(s, start, end - start);
		if (!split[i])
		{
			free_split(split, i);
			free(split);
			return (NULL);
		}
		start = end;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;

	if (s == NULL)
		return (NULL);
	word_count = get_word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (split == NULL)
		return (NULL);
	split = fill_split(split, s, c, word_count);
	return (split);
}

/*int main(void)
{
	char *s = ",,,,Hola,,que,tal,,,,estas";
	char c = ',';
	char **split = ft_split(s, c);
	for (int i = 0; 
		split[i]; 
		i++)
	{
		printf("%s\n", split[i]);
	}
	free(split); 

	char *d = "     Hola  que   tal  estas";
	char b = ' ';
	char **split1 = ft_split(d, b);
	for (int i = 0; 
		split1[i]; 
		i++)
	{
		printf("%s\n", split1[i]);
	}
	free(split1);

	return 0;
}*/
