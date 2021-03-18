/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:44:54 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/26 12:03:07 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t n;

	if (!(src))
		return (0);
	if (!(dest) || size == 0)
		return (ft_strlen(src));
	n = 0;
	while (src[n] && n < (size - 1))
	{
		dest[n] = (char)src[n];
		n++;
	}
	dest[n] = 0;
	while (src[n])
	{
		n++;
	}
	return (n);
}
