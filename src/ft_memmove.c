/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:56 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:24:56 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = src;

	d = dest;
	if (d == s)
		return (dest);
	else if (s < d)
		while (n--)
			*(d + n) = *(s + n);
	else
		ft_memcpy(d, s, n);
	return (dest);
}
