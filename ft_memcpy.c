/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <tbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 11:53:23 by tbertoli          #+#    #+#             */
/*   Updated: 2021/02/07 11:32:32 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!(unsigned char*)dst && !(unsigned char *)src)
		return (0);
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char*)(src + i);
		i++;
	}
	return (dst);
}
