/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <tbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 17:37:41 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/30 16:09:22 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putlong(long n, int fd)
{
	if (n >= 10)
		putlong(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	long	v;

	v = n;
	if (v < 0)
	{
		ft_putchar_fd('-', fd);
		v = -v;
	}
	putlong(v, fd);
}
