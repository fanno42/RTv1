/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:17:58 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:24:43 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && y < n)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}
