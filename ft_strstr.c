/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 17:43:00 by msinca            #+#    #+#             */
/*   Updated: 2015/11/10 17:33:42 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		auxiliary;

	i = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		j = 0;
		auxiliary = i;
		while (s1[auxiliary] != '\0' && s2[j] != '\0' && s1[auxiliary] == s2[j])
		{
			auxiliary++;
			j++;
		}
		if (s2[j] == '\0')
			return (char*)(s1 + i);
		i++;
	}
	return (NULL);
}
