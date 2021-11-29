/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:16:42 by dha               #+#    #+#             */
/*   Updated: 2021/11/28 19:54:51 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;
	size_t	i;
	size_t	len;

	if (lst == 0)
		return (0);
	i = 0;
	len = ft_lstsize(lst);
	while (i < len)
	{
		tmp = (t_list *) malloc(sizeof(t_list));
		if (i == 0)
			ret = tmp;
		if (tmp == 0)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		tmp -> content = f(lst -> content);
		tmp = tmp -> next;
		lst = lst -> next;
	}
	return (ret);
}
