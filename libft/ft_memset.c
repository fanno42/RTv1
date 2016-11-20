/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 10:30:46 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:23:24 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void				*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)b;
	while (n)
	{
		*t = (unsigned char)c;
		t++;
		n--;
	}
	return (b);
}
