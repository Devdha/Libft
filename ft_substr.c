/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:04:30 by dha               #+#    #+#             */
/*   Updated: 2021/11/20 19:52:02 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ret;

	s_len = ft_strlen(s);
	if (len > s_len - start)
		len = s_len - start;
	ret = (char *) malloc(sizeof(char) * (ft_strlen + 1));
	if (ret == 0)
		return (0);
	ft_strlcpy(ret, s + start, len);
	return (ret);
}
