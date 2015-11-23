/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 17:54:11 by msinca            #+#    #+#             */
/*   Updated: 2015/11/09 18:24:12 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t length)
{
	size_t	i;

	i = 0;
	while (i < length && *(unsigned char *)(src + i) != (unsigned char)c)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	if (*(unsigned char *)(src + i) == (unsigned char)c)
		return (dest + i + 1);
	return (NULL);
}
