/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:12:43 by msinca            #+#    #+#             */
/*   Updated: 2015/11/23 14:18:20 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*current_elem;
	t_list	*new_elem;
	t_list	*new_list;

	if ((current_elem = ft_lstnew(lst->content, lst->content_size)) == NULL)
		return (NULL);
	current_elem = (*f)(lst);
	new_list = current_elem;
	while (lst->next)
	{
		lst = lst->next;
		if ((new_elem = ft_lstnew(lst->content, lst->content_size)) == NULL)
			return (NULL);
		new_elem = (*f)(lst);
		current_elem->next = new_elem;
		current_elem = new_elem;
	}
	return (new_list);
}
