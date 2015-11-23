/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 16:54:26 by msinca            #+#    #+#             */
/*   Updated: 2015/11/01 17:01:17 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t length)
{
	size_t	i_s;
	size_t	i_d;

	i_s = 0;
	i_d = 0;
	while (dest[i_d])
		i_d++;
	while (src[i_s] && i_s < length)
	{
		dest[i_d] = src[i_s];
		i_d++;
		i_s++;
	}
	dest[i_d] = 0;
	return (dest);
}
