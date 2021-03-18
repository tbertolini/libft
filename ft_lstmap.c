/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertoli <tbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:44:11 by tbertoli          #+#    #+#             */
/*   Updated: 2021/01/27 11:44:35 by tbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new_lst;
	t_list		*p_new;
	t_list		*p_old;

	if (!lst || !(new_lst = ft_lstnew((*f)(lst->content))))
		return (NULL);
	p_new = new_lst;
	p_old = lst->next;
	while (p_old)
	{
		if (!(p_new->next = ft_lstnew((*f)(p_old->content))))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		p_new = p_new->next;
		p_old = p_old->next;
	}
	return (new_lst);
}
