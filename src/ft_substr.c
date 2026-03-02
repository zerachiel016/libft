/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:06 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:06 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	size;

	if (!s)
		return (NULL);
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
