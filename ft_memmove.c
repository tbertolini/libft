/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:21:02 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/26 10:44:24 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int i;

	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
		{
			*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(unsigned char*)(dest + i) = *(unsigned char*)(src + i);
			i++;
		}
	}
	return (dest);
}
