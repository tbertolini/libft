/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:09:24 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/27 12:46:39 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	dim;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	dim = ft_strlen(s + start);
	if (dim < len)
		len = dim;
	if (!(substr = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
