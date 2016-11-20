/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 19:27:28 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:44:44 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;

	new = (*f)(lst);
	lst = lst->next;
	while (lst)
	{
		tmp = (*f)(lst);
		ft_lstpush(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
