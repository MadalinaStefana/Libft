/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 17:18:51 by msinca            #+#    #+#             */
/*   Updated: 2015/11/01 18:21:49 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*p;

	if (size <= 0)
		return (NULL);
	p = (unsigned char *)malloc(size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size);
	return ((void *)p);
}
