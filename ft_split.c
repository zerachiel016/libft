/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 06:48:58 by zdadsi            #+#    #+#             */
/*   Updated: 2025/10/28 03:29:45 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_tokens(char const *s, char c)
{
	size_t	tokens_num;

	tokens_num = (*s && *s != c);
	while (*++s)
		if (*(s - 1) == c && *s != c)
			tokens_num++;
	return (tokens_num);
}

static void	wipe_tokens(char **tokens, size_t prev_tokens)
{
	while (prev_tokens)
		free(tokens[prev_tokens]);
	free(tokens);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens_count;
	char	**tokens;
	size_t	i;
	size_t	w_len;

	tokens = malloc((tokens_count + 1) * sizeof(char *));
	tokens_count = count_tokens(s, c) * (tokens != NULL);
	tokens[tokens_count] = NULL;
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
		{
			wipe_tokens(tokens, i);
			return (NULL);
		}
		i++;
	}
	return (tokens);
}
