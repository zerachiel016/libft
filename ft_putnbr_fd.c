/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:58 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:24:58 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

static void	mini_itoa(int n, char *s, int *len)
{
	int				neg;
	unsigned int	_n;
	int				digits;

	neg = (n < 0);
	_n = (n ^ -neg) + neg;
	digits = neg + count_digits(_n);
	*len = digits;
	while (digits--)
	{
		s[digits] = (_n % 10) + '0';
		_n /= 10;
	}
	if (neg)
		*s = '-';
}

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	char	s[11];

	if (fd < 0)
		return ;
	mini_itoa(n, s, &len);
	write(fd, s, len);
}
