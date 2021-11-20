/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:49:17 by dha               #+#    #+#             */
/*   Updated: 2021/11/20 19:06:08 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*t_dst;
	const unsigned char	*t_src = (const unsigned char *)src;

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
