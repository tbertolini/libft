/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:09:13 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/27 12:39:55 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(str + i) == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
