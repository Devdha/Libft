/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:04:07 by dha               #+#    #+#             */
/*   Updated: 2021/11/25 19:52:42 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (needle[0] == '\0')
		return ((char *) haystack);
	if (len < 1 || *haystack == '\0')
		return (0);
	while (*haystack != '\0' && len-- > 0)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i) && i < len)
		{
			i++;
			if (needle[i] == '\0')
				return ((char *) haystack);
		}
		haystack++;
	}
	return (0);
}
