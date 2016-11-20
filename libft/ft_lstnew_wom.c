/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_wom.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 20:58:07 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:47:55 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list			*ft_lstnew_wom(void *content, size_t content_size)
{
	t_list		*tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
		tmp->next = NULL;
	}
	else
	{
		tmp->content = content;
		tmp->content_size = content_size;
		tmp->next = NULL;
	}
	return (tmp);
}
