/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:22:42 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/19 05:17:52 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
  char *d = dst;
  const char *s = src;
  size_t n = dstsize;

  if (n) {
    while (--n && (*d++ = *s++) != '\0')
      ;
    *d = '\0';
    // *(--d) = '\0';
            printf("%ld", d - dst);
  }

  while (*s++)
    ;

  return --s - src;
}

int main() {
    char dst[3] = "a";
    char *src = "c";

    ft_strlcpy(dst, src, 2);
    printf("%s", dst);
}
