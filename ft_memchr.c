/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:47:03 by dha               #+#    #+#             */
/*   Updated: 2021/11/16 21:20:00 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*tmp_s;

	i = 0;
	tmp_s = s;
	while (i < n)
	{
		if (*tmp_s == c)
			return ((void *) tmp_s);
		tmp_s++;
		i++;
	}
	return (0);
}
