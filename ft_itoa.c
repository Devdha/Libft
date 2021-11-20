/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:30:14 by dha               #+#    #+#             */
/*   Updated: 2021/11/20 19:01:31 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	alen(int n)
{
	unsigned int	p_n;
	unsigned char	len;

	if (n < 0)
	{
		p_n = -n;
		len++;
	}
	while (p_n > 0)
	{
		p_n /= 10;
		len++;
	}
	return (len);
}

static unsigned int	pow_ten(unsigned char exp)
{
	unsigned int	ret;

	ret = 1;
	while (exp--)
		ret *= 10;
	return (ret);
}

char	*ft_itoa(int n)
{
	unsigned int	p_n;
	char			*ret;
	unsigned char	len;
	unsigned char	i;

	len = alen(n);
	ret = (char *) malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	i = 0;
	if (n < 0)
	{
		p_n = -n;
		ret[i++] = '-';
		len--;
	}
	while (len > 0)
	{
		ret[i++] = (p_n / pow_ten(len - 1)) + '0';
		p_n %= pow_ten(len - 1);
		len--;
	}
	ret[i] = '\0';
	return (ret);
}
