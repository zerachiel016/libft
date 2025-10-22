/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 23:53:09 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/23 00:25:44 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s, const char *find, size_t slen){
    size_t len = ft_strlen(find);

    if(!len)
        return (char *)s;

    while(len <= slen--) 
        if(!ft_strncmp(s++, find, len))
            return (char *)--s;

    return 0;
}
