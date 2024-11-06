/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:49:01 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/05 08:34:30 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	size_t	count;
	size_t	in_word;

	in_word = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static void	free_split(char **result, int i)
{
	while (i > 0)
		free (result[--i]);
	free(result);
}

static char	**fill_arr(char **result, const char *s, char c, int i)
{
	int	j;
	int	start;

	j = 0;
	while (s[j])
	{
		while (s[j] && s[j] == c)
			j++;
		if (s[j])
		{
			start = j;
			while (s[j] && s[j] != c)
				j++;
			result[i] = ft_substr(s, start, j - start);
			if (result[i] == NULL)
			{
				free_split(result, i);
				return (NULL);
			}
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_word(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (word_count == 0)
	{
		result[0] = NULL;
		return (result);
	}
	return (fill_arr(result, s, c, 0));
}
