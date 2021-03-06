/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 15:51:37 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/22 14:55:49 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 32 && ch <= 126)
		return (1);
	return (0);
}
