/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:22:42 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/18 01:23:54 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  char *d = dst;
  const char *s = src;
  size_t n = dstsize;

  // dst -> ..........
  // dstsize -> 10
  // src -> hello world end..

  if (n) {
    while (--n && (*d++ = *s++) != '\0')
      ;
    *d = '\0';
  }

  while (*s++)
    ;

  return --s - src;
}

#include <stdio.h>
#include <string.h>

int main() {
  char dst[7] = "hellow\0";
  char *src = "xz";

  // strlcpy(dst, src, 7);
  ft_strlcpy(dst, src, 7);

  printf("%s", dst);
}
