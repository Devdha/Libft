/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:43:18 by dha               #+#    #+#             */
/*   Updated: 2021/11/20 19:15:31 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	trimmed_len(char const *s1, char const *set)
{
	int	i;
	int	trim_i;

	i = 0;
	trim_i = 0;
	while (s1[i] != '\0')
	{
		if (!is_set(s1[i], set))
			trim_i++;
		i++;
	}
	return (trim_i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		trim_i;
	char	*trimmed;

	len = trimmed_len(s1, set);
	trimmed = (char *) malloc(sizeof(char) * (len + 1));
	if (trimmed == 0)
		return (0);
	i = 0;
	trim_i = 0;
	while (s1[i] != '\0')
	{
		if (!is_set(s1[i], set))
		{
			trimmed[trim_i] = s1[i];
			trim_i++;
		}
		i++;
	}
	trimmed[trim_i] = '\0';
	return (trimmed);
}
