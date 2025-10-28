/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 00:28:48 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/28 07:44:12 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_atoi(const char *nbr)
{
	unsigned long	res;
	unsigned long	offset;
	int				lim;
	int				neg;

	res = 0;
	while ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
		nbr++;
	neg = (*nbr == '-');
	nbr += (*nbr == '-' || *nbr == '+');
	offset = LONG_MAX + neg;
	lim = 7 + neg;
	offset /= 10;
	while ('0' <= *nbr && *nbr <= '9')
	{
		if (res > offset || (res == offset && (*nbr - '0') > lim))
			return (-(!neg));
		res = res * 10 + (*nbr++ - '0');
	}
	return ((res ^ -neg) + neg);
}
