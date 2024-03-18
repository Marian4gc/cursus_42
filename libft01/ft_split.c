/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianga <marianga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:24:49 by marianga          #+#    #+#             */
/*   Updated: 2024/03/18 12:41:22 by marianga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	skip_chars(char const *s, size_t index, char c)
{
	while (s[index] == c)
		index++;
	return (index);
}

size_t	get_word_end(char const *s, size_t start_index, char c)
{
	while (s[start_index] && s[start_index] != c)
		start_index++;
	return (start_index);
}

char	*get_next_word(char const *s, size_t *start_index, char c)
{
	size_t	end_index;
	char	*word;

	*start_index = skip_chars(s, *start_index, c);
	end_index = get_word_end(s, *start_index, c);
	word = ft_substr(s, *start_index, end_index - *start_index);
	*start_index = end_index;
	return (word);
}

size_t	get_word_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		i = skip_chars(s, i, c);
		if (s[i] != '\0')
			count++;
		i = get_word_end(s, i, c);
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;
	size_t	i;
	size_t	start_index;

	if (s == NULL)
		return (NULL);
	word_count = get_word_count(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	start_index = 0;
	while (i < word_count)
	{
		split[i] = get_next_word(s, &start_index, c);
		i++;
	}
	split[i] = NULL;
	return (split);
}

/*int main(void)
{
	char *s = ",,,,Hola,,que,tal,,,,estas";
	char c = ',';
	char **split = ft_split(s, c);
	for (int i = 0; split[i]; i++)
	{
		printf("%s\n", split[i]);
	}
	free(split); 

	char *d = "     Hola  que   tal  estas";
	char b = ' ';
	char **split1 = ft_split(d, b);
	for (int i = 0; split1[i]; i++)
	{
		printf("%s\n", split1[i]);
	}
	free(split1);

	return 0;
}*/