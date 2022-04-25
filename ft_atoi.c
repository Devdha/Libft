/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 01:10:35 by dha               #+#    #+#             */
/*   Updated: 2022/04/22 13:56:01 by dha              ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	tot;
	int				sign;

	tot = 0;
	sign = 1 - ((*str == '-') << 1);
	while (is_space(*str))
		str++;
	str += (*str == '-' || *str == '+');
	while (*str >= '0' && *str <= '9')
	{
		if (tot > (unsigned long) LONG_MAX / 10 + (sign < 0))
			return ((sign < 0) - 1);
		tot = tot * 10;
		if (tot > (unsigned long) LONG_MAX - (*str - '0') + (sign < 0))
			return ((sign < 0) - 1);
		tot += (*str - '0');
		str++;
	}
	return (tot * sign);
}
