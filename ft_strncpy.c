/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 15:59:22 by msinca            #+#    #+#             */
/*   Updated: 2015/11/09 19:16:18 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t length)
{
	size_t	i;

	i = 0;
	while (src[i] && (i < length))
	{
		dest[i] = src[i];
		i++;
	}
	while (i <= length)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
