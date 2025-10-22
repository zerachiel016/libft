/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:26:10 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/22 23:52:08 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *str1, const void *str2, size_t n) {

    const unsigned char *s1 = str1;
    const unsigned char *s2 = str2;

    while(n--)
        if(*s1++ != *s2++)
            return *--s1 - *--s2;
    return 0;
}
