/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:26:10 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/23 00:13:33 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *memchr(const void *src, int c, size_t n) {

    const unsigned char *s = src;

    while(n--)
        if(*s++ == c)
            return (void *)--s;

    return 0;
}
