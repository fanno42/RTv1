/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 11:27:24 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:04:22 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_cut_str(char **str, char c)
{
	int	i;

	i = 0;
	while (**str && **str != c)
	{
		(*str)++;
		i++;
	}
	return (i);
}
