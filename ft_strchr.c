/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <tbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:32:15 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/30 16:51:59 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	t;

	t = (unsigned char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] == t)
			return (((char*)str) + i);
		i++;
	}
	if (str[i] == t)
		return (((char*)str) + i);
	return (NULL);
}
