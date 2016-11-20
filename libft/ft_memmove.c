/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:18:50 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 10:50:09 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;
	size_t			i;

	src2 = (unsigned char*)src;
	dest2 = (unsigned char*)dest;
	i = 0;
	if (dest >= src)
	{
		while (n > 0)
		{
			n--;
			dest2[n] = src2[n];
		}
	}
	else
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	return (dest);
}
