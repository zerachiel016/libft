/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:04 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:04 by zdadsi           ###   ########.fr       */
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
