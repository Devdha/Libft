/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:08:57 by dha               #+#    #+#             */
/*   Updated: 2021/11/28 19:42:42 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// free 해줘야함!!!!!

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != '\0' && str[i] != c)
			i++;
		cnt++;
	}
	return (cnt);
}

static char	*split_each(char const *str, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (word == 0)
		return (0);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		start;
	int		i;
	int		word_i;

	i = 0;
	word_i = 0;
	words = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (words == 0)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		words[word_i] = split_each(s + start, i - start);
		word_i++;
	}
	words[word_i] = 0;
	return (words);
}
