/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 14:21:41 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:45:45 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = *alst;
	while (*alst)
	{
		tmp = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		ft_memdel((void*)alst);
		*alst = tmp;
	}
}
