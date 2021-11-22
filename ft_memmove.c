/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:49:17 by dha               #+#    #+#             */
/*   Updated: 2021/11/21 20:37:49 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;

	t_src = (unsigned char *) src;
	t_dst = (unsigned char *) dst;
	if (t_dst <= t_src)
	{
		while (len)
		{
			*t_dst++ = *t_src++;
			len--;
		}
	}
	else
	{
		while (len)
		{
			len--;
			t_dst[len] = t_src[len];
		}
	}
	return (dst);
}
