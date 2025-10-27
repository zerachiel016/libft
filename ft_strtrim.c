/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:19:42 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/25 19:30:15 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set) {
    while (ft_strchr(set, *s1))
        s1++;

    size_t end = ft_strlen(s1);

    while (end && ft_strchr(set, s1[end - 1]))
        end--;

    return ft_substr(s1, 0, end);;
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
//   return trimmed;
// }
