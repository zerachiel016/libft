/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <zdadsi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:59 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/03 18:24:59 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_tokens(char const *s, char c)
{
	size_t	tokens_num;

	if (!s || !*s)
		return (0);
	tokens_num = (*s && *s != c);
	while (*++s)
		if (*(s - 1) == c && *s != c)
			tokens_num++;
	return (tokens_num);
}

static void	*wipe_tokens(char **tokens, size_t prev_tokens)
{
	while (prev_tokens)
		free(tokens[--prev_tokens]);
	free(tokens);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens_count;
	char	**tokens;
	size_t	i;
	size_t	w_len;

	tokens_count = count_tokens(s, c);
	tokens = malloc((tokens_count + 1) * sizeof(char *));
	if (!tokens)
		return (NULL);
	i = 0;
	while (i < tokens_count)
	{
		w_len = 1;
		while (*s++ == c)
			;
		while (*s++ != c)
			w_len++;
		tokens[i] = ft_substr(s - w_len - 1, 0, w_len);
		if (!tokens[i])
			return (wipe_tokens(tokens, i));
		i++;
	}
	tokens[tokens_count] = NULL;
	return (tokens);
}
