/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dha <dha@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 23:16:34 by dha               #+#    #+#             */
/*   Updated: 2021/11/29 12:54:03 by dha              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst == 0)
		return ;
	tmp = *lst;
	while (*lst)
	{
		tmp = tmp -> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	free(lst);
}
