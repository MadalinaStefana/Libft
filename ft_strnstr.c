/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 17:43:00 by msinca            #+#    #+#             */
/*   Updated: 2015/11/09 15:08:24 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t length)
{
	int		i;
	int		j;
	size_t	o;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		o = i;
		while (s1[o] != '\0' && s2[j] != '\0' && s1[o] == s2[j] && o < length)
		{
			o++;
			j++;
		}
		if (s2[j] == '\0')
			return (char*)(s1 + i);
		i++;
	}
	return (NULL);
}
