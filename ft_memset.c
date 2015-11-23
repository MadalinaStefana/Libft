/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 14:19:07 by msinca            #+#    #+#             */
/*   Updated: 2015/11/01 19:25:50 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int byte, size_t length)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (length--)
		p[length] = (unsigned char)byte;
	return (s);
}
