/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:05 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:05 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	len;

	len = ft_strlen(find);
	if (!len)
		return ((char *)s);
	while (len <= slen--)
		if (!ft_strncmp(s++, find, len))
			return ((char *)--s);
	return (0);
}
