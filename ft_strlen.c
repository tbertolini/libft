/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:20:43 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/26 11:03:01 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	n;
	char	*pchar;

	n = 0;
	pchar = (char *)str;
	while (*pchar != 0)
	{
		n++;
		pchar++;
	}
	return (n);
}
