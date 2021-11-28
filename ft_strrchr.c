/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:57:06 by dha               #+#    #+#             */
/*   Updated: 2021/11/28 19:42:32 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*start;

	start = (char *) s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *) s);
	while (--s >= start)
	{
		if (*s == (char) c)
			return ((char *) s);
	}
	return (0);
}
