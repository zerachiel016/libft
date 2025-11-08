/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:25:05 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:25:05 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	c = (unsigned char)c;
	p = 0;
	if (!c)
		return ((char *)s + ft_strlen(s));
	while (*s)
		if (*s++ == c)
			p = (char *)s - 1;
	return (p);
}
