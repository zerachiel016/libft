/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:28:48 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/24 05:45:19 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *nbr)
{
	unsigned long	res;
	unsigned long	lim;
	unsigned int	offset;
	int				sign;

	res = 0;
	while ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
		nbr++;
	sign = 1 - (2 * (*nbr == '-'));
	nbr += (*nbr == '-' || *nbr == '+');
	lim = LONG_MAX + ((sign != 1) * 1);
	offset = lim % 10;
	lim /= 10;
	while ('0' <= *nbr && *nbr <= '9')
	{
		if (res > lim || (res == lim && (*nbr - '0') > offset))
			return (-1 * (sign == 1));
		res = res * 10 + (*nbr++ - '0');
	}
	return (res * sign);
}
