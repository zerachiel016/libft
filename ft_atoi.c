/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:23 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:08 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

int	ft_atoi(const char *nbr)
{
	unsigned long		res;
	const unsigned long	offset = LONG_MAX / 10;
	int					lim;
	int					neg;

	res = 0;
	while ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
		nbr++;
	neg = (*nbr == '-');
	nbr += (neg || *nbr == '+');
	lim = 7 + neg;
	while ('0' <= *nbr && *nbr <= '9')
	{
		if (res > offset || (res == offset && (*nbr - '0') > lim))
			return (-(!neg));
		res = res * 10 + (*nbr - '0');
		nbr++;
	}
	return ((res ^ -neg) + neg);
}
