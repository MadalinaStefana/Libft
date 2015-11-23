/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 16:46:02 by msinca            #+#    #+#             */
/*   Updated: 2015/11/10 17:25:22 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	i;
	size_t	n;

	n = length;
	i = 0;
	if (length == 0)
		return (0);
	while ((n--) && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		else
			i++;
	}
	if (i == length)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
