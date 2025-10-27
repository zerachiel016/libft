/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:20:48 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/27 11:32:41 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char(f)(unsigned int, char)) {
    char *new = ft_strdup(s);
    size_t i = 0;
    if (new)
        while (new[i]) {
            f(i, new[i]);
            i++;
        }
    return new;
}
