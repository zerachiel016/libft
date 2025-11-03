/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:03 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:03 by zdadsi           ###   ########.fr       */
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
