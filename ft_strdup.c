/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 05:58:13 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/23 06:11:37 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s) {
    size_t len = ft_strlen(s) + 1;
    void *new = malloc(len);

    if(!new)
        return new;

    return ft_memcpy(new, s, len);
}
