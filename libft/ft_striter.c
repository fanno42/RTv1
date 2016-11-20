/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:26:54 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:17:21 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_striter(char *s, void (*f)(char *s))
{
	if (s == NULL)
		return ;
	while (*s)
	{
		(*f)(s);
		s++;
	}
}
