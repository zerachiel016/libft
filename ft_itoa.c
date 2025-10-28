/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 04:13:18 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/27 08:06:37 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// HACK: 6-7 times faster than looping/dividing
static int	count_digits(unsigned int n)
{
	if (n < 10)
		return (1);
	if (n < 100)
		return (2);
	if (n < 1000)
		return (3);
	if (n < 10000)
		return (4);
	if (n < 100000)
		return (5);
	if (n < 1000000)
		return (6);
	if (n < 10000000)
		return (7);
	if (n < 100000000)
		return (8);
	if (n < 1000000000)
		return (9);
	return (10);
}

char	*ft_itoa(int n)
{
	int				neg;
	unsigned int	_n;
	int				digits;
	char			*res;

	neg = (n < 0);
	_n = (n ^ -neg) + neg;
	digits = neg + count_digits(_n);
	res = malloc(neg + digits + 1);
	if (!res)
		return (0);
	res[neg + digits] = '\0';
	while (digits--)
	{
		res[digits] = (_n % 10) + '0';
		_n /= 10;
	}
	if (neg)
		*res = '-';
	return (res);
}

// NOTE: Old ft_itoa version
//
// char *ft_itoa(int n) {
//   int neg;
//   unsigned int _n;
//   int len;
//   char *res;
//
//   neg = (n < 0);
//   _n = (1 - 2 * neg) * (unsigned int)n;
//   len = neg + !n;
//   while (n) {
//     n /= 10;
//     len++;
//   }
//   res = malloc(len + 1);
//   if (!res)
//     return (0);
//   res[len] = '\0';
//   while (len-- > neg) {
//     res[len] = (_n % 10) + '0';
//     _n /= 10;
//   }
//   if (neg)
//     *res = '-';
//   return (res);
// }
