/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:29:21 by msinca            #+#    #+#             */
/*   Updated: 2015/11/23 14:34:46 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;
	void	*new_content;

	if ((new_elem = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	new_elem->next = NULL;
	new_content = (void *)malloc(sizeof(void));
	new_content = (void *)content;
	new_elem->content = new_content;
	if (content)
		new_elem->content_size = content_size;
	else
		new_elem->content_size = 0;
	return (new_elem);
}
