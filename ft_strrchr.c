/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <tbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 13:48:17 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/30 17:02:30 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;
	char	t;

	t = (unsigned char)c;
	i = ft_strlen(s) + 1;
	last = (char*)s;
	while (i-- > 0)
	{
		if (last[i] == t)
			return (last + i);
	}
	return (NULL);
}
