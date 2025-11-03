/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:56 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:24:56 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// PERF: Could be more optimized with 64-bit bulk writes, SIMD operations etc...
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	cc;

	p = (unsigned char *)s;
	cc = c & 0xff;
	while (n--)
		*p++ = cc;
	return (s);
}
