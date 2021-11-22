/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:48:27 by dha               #+#    #+#             */
/*   Updated: 2021/11/21 20:37:43 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*t_dst;
	unsigned char	*t_src;

	t_src = (unsigned char *) src;
	t_dst = (unsigned char *) dst;
	while (n)
	{
		*t_dst++ = *t_src++;
		n--;
	}
	return (dst);
}
