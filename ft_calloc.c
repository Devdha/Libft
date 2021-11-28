/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:42:59 by dha               #+#    #+#             */
/*   Updated: 2021/11/28 19:43:13 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count && size > (size_t)(-1 / count))
		return (0);
	size *= count;
	mem = malloc(size);
	if (mem == 0)
		return (0);
	return (ft_memset(mem, 0, size));
}
