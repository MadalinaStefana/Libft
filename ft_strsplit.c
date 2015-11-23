/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 17:06:02 by msinca            #+#    #+#             */
/*   Updated: 2015/11/22 15:40:42 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_words(const char *s, char c)
{
	int i;
	int count;

	count = 0;
	if (s[0] != c)
		count++;
	i = count;
	while (s[i + 1] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static int		ft_get_length(const char *s, int i, char c)
{
	int	length;

	length = 0;
	while (s[i] != c && s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**splitted;
	int		i;
	int		j;
	int		nb_words;

	nb_words = ft_nb_words(s, c);
	if ((splitted = (char**)malloc(sizeof(char*) * (nb_words + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			splitted[j++] = ft_strsub(s, i, (size_t)ft_get_length(s, i, c));
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	splitted[j] = 0;
	return (splitted);
}
