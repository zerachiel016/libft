/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:54 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:24:54 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*s = src;
    c = (unsigned char)c;

	while (n--)
		if (*s++ == c)
			return ((void *)--s);
	return (0);
}
