/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 12:00:53 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/26 12:01:12 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t n;

	if (!b)
		return (NULL);
	n = 0;
	while (n < len)
	{
		*(unsigned char*)((b + n)) = (char)c;
		n++;
	}
	return (b);
}
