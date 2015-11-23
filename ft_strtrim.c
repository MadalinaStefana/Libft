/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:57:08 by msinca            #+#    #+#             */
/*   Updated: 2015/11/22 15:16:54 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wh(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int	ft_get_length(char const *s, unsigned int *first_ok_index, unsigned
		int *last_ok_index)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (wh(s[i]))
		i++;
	*first_ok_index = i;
	while (s[i])
	{
		i++;
		length++;
	}
	if (i)
		i--;
	while (wh(s[i]) && length)
	{
		i--;
		length--;
	}
	*last_ok_index = i;
	return (length);
}

char		*ft_strtrim(char const *s)
{
	char			*trimmed;
	unsigned int	first_ok_index;
	unsigned int	last_ok_index;
	unsigned int	length;
	unsigned int	i;

	first_ok_index = 0;
	last_ok_index = 0;
	i = 0;
	length = ft_get_length(s, &first_ok_index, &last_ok_index);
	if ((trimmed = (char *)malloc(length + 1)) == NULL)
		return (NULL);
	while (first_ok_index <= last_ok_index)
	{
		trimmed[i++] = s[first_ok_index];
		first_ok_index++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
