/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:54:48 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:47:38 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list				*ft_lstnew(void const *content, size_t content_size)
{
	t_list			*tmp;
	char			*tcontent;

	tcontent = ft_strnew(content_size);
	if (tcontent == NULL)
		return (NULL);
	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	if (content == NULL)
	{
		tmp->content = NULL;
		tmp->content_size = 0;
		return (tmp);
	}
	else
	{
		tmp->content = ft_memcpy(tcontent, content, content_size);
		tmp->content_size = content_size;
		tmp->next = NULL;
	}
	return (tmp);
}
