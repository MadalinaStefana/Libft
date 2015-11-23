/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 13:50:33 by msinca            #+#    #+#             */
/*   Updated: 2015/11/06 13:49:28 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	sign = 0;
	number = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = 1;
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		number = number * 10 + s[i] - '0';
		i++;
	}
	if (sign == 1)
		number = number * (-1);
	return (number);
}
