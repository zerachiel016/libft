/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:28:48 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/27 11:28:30 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *nbr)
{
	unsigned long	res;
	unsigned long	lim;
	int	offset;
	int				neg;

	res = 0;
	while ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
		nbr++;

	neg = (*nbr == '-');
	nbr += (*nbr == '-' || *nbr == '+');
	lim = LONG_MAX + neg;
	offset = 7 + neg;
	lim /= 10;

	while ('0' <= *nbr && *nbr <= '9')
	{
		if (res > lim || (res == lim && (*nbr - '0') > offset))
			return -(!neg);
		res = res * 10 + (*nbr++ - '0');
	}
	return (res ^ -neg) + neg;
}
