/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:06 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:06 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, 0, end));
}

//  NOTE: Old ft_strtrim Version
//
// char *ft_strtrim(char const *s1, char const *set) {
//
//   size_t len = ft_strlen(s1);
//   size_t l_trim = 0;
//   size_t r_trim = 0;
//
//   while (s1[l_trim] && ft_strchr(set, s1[l_trim]))
//     l_trim++;
//
//   if (l_trim != len)
//     while (s1[len - r_trim - 1] && ft_strchr(set, s1[len - r_trim - 1]))
//       r_trim++;
//
//   len -= l_trim + r_trim;
//   char *trimmed = malloc(len);
//
//   if (trimmed)
//     trimmed = ft_memcpy(trimmed, s1 + l_trim, len);
//
//   return (trimmed);
// }
