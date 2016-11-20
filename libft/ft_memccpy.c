/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:17:29 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:21:06 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*dest2;
	unsigned char		*src2;
	size_t				i;

	i = 0;
	dest2 = (unsigned char*)dest;
	src2 = (unsigned char*)src;
	while (i < n)
	{
		dest2[i] = src2[i];
		if (src2[i] == (unsigned char)c)
			return (dest2 + i + 1);
		i++;
	}
	return (NULL);
}
