/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 17:05:51 by msinca            #+#    #+#             */
/*   Updated: 2015/11/09 18:22:21 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t length)
{
	size_t	i;
	size_t	j;
	size_t	size;

	size = ft_strlen(dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	if (length < size)
		return (ft_strlen(src) + length);
	if (length == size)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && j < length - size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (size + ft_strlen(src));
}
