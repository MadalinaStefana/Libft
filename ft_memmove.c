/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 15:54:32 by msinca            #+#    #+#             */
/*   Updated: 2015/11/06 12:47:45 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char*)malloc(sizeof(unsigned char) * (length + 1));
	while (i < length)
	{
		p[i] = *(unsigned char*)(src + i);
		i++;
	}
	i = 0;
	while (i < length)
	{
		*(unsigned char*)(dest + i) = p[i];
		i++;
	}
	free(p);
	return (dest);
}
