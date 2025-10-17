/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:55:35 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/16 23:33:24 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n){
    unsigned char *d = dest;
    const unsigned char *s = src;

    if(d == s)
        return dest;
    else if ( s < d){
        while(n--)
            *(d+n) = *(s+n);
    }
    else {
        while(n--)
            *d++ = *s++;
    }

    return dest;
}
