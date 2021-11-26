/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:12:42 by dha               #+#    #+#             */
/*   Updated: 2021/11/25 20:22:16 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
{
	char			*ret;
	unsigned int	i;
	unsigned int	len;
	
	i = 0;
	len = 0;
	while (s[len] != '\0')
		len++;
	ret = (char *) malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (0);
	while (i < len)
		ret[i++] = f(i, s[i]);
	return (ret);
}