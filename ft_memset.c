/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:45:44 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/27 05:18:00 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// PERF: Could be more optimized with (64-bit bulk writes, SIMD operations etc...)
void *ft_memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *)s;
  unsigned char cc = c & 0xff;

  while (n--)
    *p++ = cc;
  return s;
}
