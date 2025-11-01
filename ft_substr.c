/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:40:38 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/25 19:21:21 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	size = ft_strlen(s);
	if (size <= start)
		return (ft_strdup(""));
	size -= start;
	if (len < size)
		size = len;
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	p[size] = '\0';
	ft_memcpy(p, s + start, size);
	return (p);
}
