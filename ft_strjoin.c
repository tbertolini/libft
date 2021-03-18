/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:14:14 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/27 12:50:19 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	n_len;
	size_t	i;
	char	*j;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	n_len = ft_strlen(s1) + ft_strlen(s2);
	if (!(j = (char*)malloc((n_len + 1) * sizeof(char))))
		return (NULL);
	i = ft_strlcpy(j, s1, (ft_strlen(s1) + 1));
	ft_strlcat((j + ft_strlen(s1)), s2, (ft_strlen(s2) + 1));
	return (j);
}
