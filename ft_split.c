/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <tbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 08:36:41 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/30 16:14:35 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getn_strs(const char *s, char c)
{
	size_t	n_strs;

	n_strs = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			n_strs++;
			while (*s && *s != c)
				s++;
		}
	}
	return (n_strs);
}

static char		**free_all(char **strs, size_t i)
{
	while (strs[i] && i >= 0)
	{
		free(strs[i]);
		strs[i] = NULL;
		i--;
	}
	free(strs);
	strs = NULL;
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			len;
	size_t			n_strs;
	char			**strs;

	if (!s || !(strs = (char **)malloc((getn_strs(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	n_strs = getn_strs(s, c);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			if (i < n_strs && !(strs[i++] = ft_substr(s, 0, len)))
				return (free_all(strs, i));
			s += len;
		}
	}
	strs[i] = NULL;
	return (strs);
}
