/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 04:24:41 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/19 05:20:51 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


size_t strlcat(char *dst, const char *src, size_t size) {
    char *d = dst;
    const char *s = src;
    size_t n = size;

    while(*d++)
        n--;

    while(--n && (*d++ = *s++) != '\0')
        ;
        if(--d - dst < size)
           *

    while (*s++)
        ;

    return (--d - dst) + (--s - src);
}
