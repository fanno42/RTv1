/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:19:49 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 10:42:36 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		y;
	size_t		tmp;

	y = 0;
	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	if (i == size)
		return (size + ft_strlen(src));
	tmp = i;
	while (src[y] != '\0' && i < size - 1)
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = '\0';
	return (tmp + ft_strlen(src));
}
