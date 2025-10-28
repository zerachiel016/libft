/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:20:48 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/28 05:30:16 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	new = ft_strdup(s);
	i = 0;
	if (new)
	{
		while (new[i])
		{
			new[i] = f(i, new[i]);
			i++;
		}
	}
	return (new);
}
