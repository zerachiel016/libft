/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:12:28 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/22 23:50:34 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, register size_t n){
    while(n--)
        if(*s1++ != *s2++)
            return *(unsigned char *)--s1 - *(unsigned char *)--s2;
    return 0;
}
