/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:22:42 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/19 05:17:52 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s = src;
	size_t		n;

	d = dst;
	n = dstsize;
	if (n)
	{
		while (--n && *s)
			*d++ = *s++;
		*d = '\0';
	}
	while (*s++)
		;
	return (--s - src);
}
