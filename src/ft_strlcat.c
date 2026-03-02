/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:02 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:02 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s = src;
	size_t		dlen;
	size_t		n;

	d = dst;
	n = size;
	if (d)
	{
		while (*d && n)
		{
			n--;
			d++;
		}
	}
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
