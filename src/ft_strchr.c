/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:00 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:00 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (*s)
		if (*s++ == c)
			return ((char *)--s);
	return (0);
}
