/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 04:24:41 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/19 05:20:51 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s = src;
	size_t		dlen;
	size_t		n;

	d = dst;
	n = size;
	while (*d && n--)
		d++;
	dlen = d - dst;
	if (n)
    {
        while (--n && *s)
            *d++ = *s++;
        *d = '\0';
    }
	while (*s++)
		;
	return (dlen + (--s - src));
}
