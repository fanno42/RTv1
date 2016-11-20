/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 21:45:02 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 10:49:52 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void	*tmp;

	tmp = NULL;
	tmp = (void*)malloc(sizeof(void) * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, size);
	return (tmp);
}
