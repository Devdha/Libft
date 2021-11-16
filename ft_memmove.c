/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:49:17 by dha               #+#    #+#             */
/*   Updated: 2021/11/13 20:47:31 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *t_dst;
	const unsigned char *t_src = (const unsigned char *)src;

	t_dst = (unsigned char *) dst;
	if (t_dst <= t_src)
	{
		while (n)
		{
			t_dst++ = t_src++;
			n--;
		}
	}
	else
	{
		while (n)
		{
			n--;
			t_dst[n] = t_src[n];
		}
	}
	return (dst);
}
