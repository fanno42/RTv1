/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:30:10 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:24:28 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
	unsigned int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (*s)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
