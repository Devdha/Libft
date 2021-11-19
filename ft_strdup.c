/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:46:09 by dha               #+#    #+#             */
/*   Updated: 2021/11/18 15:03:27 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*ret;

	i = 0;
	len = ft_strlen(s1);
	ret = (char *) malloc(sizeof(char) * len);
	while (i <= len)
	{
		ret[i] = s1[i];
		i++;
	}
	return (ret);
}
