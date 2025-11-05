/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:55 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:24:55 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1 = str1;
	const unsigned char	*s2 = str2;

    if(s1 != s2)
        while (n--)
            if (*s1++ != *s2++)
                return (*--s1 - *--s2);
	return (0);
}
