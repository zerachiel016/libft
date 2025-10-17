/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:45:44 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/16 15:12:34 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

// NOTE: Could be more optimized like the original implementations
void *ft_memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *)s;
  unsigned char cc = c & 0xff;

  while (n--)
    *p++ = cc;
  return s;
}
