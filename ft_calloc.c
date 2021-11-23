/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:23:23 by dha               #+#    #+#             */
/*   Updated: 2021/11/23 16:23:45 by dha              ###   ########.fr       */
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
