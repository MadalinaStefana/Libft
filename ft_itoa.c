/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msinca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 18:41:17 by msinca            #+#    #+#             */
/*   Updated: 2015/11/09 18:23:38 by msinca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long *n, int *sign)
{
	int		length;
	long	nb;

	nb = *n;
	length = 0;
	if (nb < 0)
	{
		*sign = -1;
		*n = -(*n);
		length = 1;
	}
	if (nb == 0)
		length = 1;
	while (nb)
	{
		length++;
		nb = nb / 10;
	}
	return (length);
}

char		*ft_itoa(int n)
{
	int		sign;
	int		size;
	char	*number;
	long	a;

	a = n;
	sign = 1;
	size = length(&a, &sign);
	number = (char *)malloc(size + 1);
	if (sign == -1)
		number[0] = '-';
	if (a == 0)
		number[0] = '0';
	number[size--] = '\0';
	while (a)
	{
		number[size--] = a % 10 + '0';
		a = a / 10;
	}
	return (number);
}
