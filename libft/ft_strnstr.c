/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:20:17 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:20:16 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnstr(const char *str, const char *src, size_t n)
{
	size_t	i;
	size_t	y;
	size_t	tmp;

	i = 0;
	y = 0;
	tmp = 0;
	while (str[i] != '\0' && i < n)
	{
		tmp = i;
		while (str[tmp] == src[y] && src[y] != '\0' && tmp < n)
		{
			tmp++;
			y++;
		}
		if (src[y] == '\0')
			return ((char*)str + i);
		tmp = 0;
		y = 0;
		i++;
	}
	return (NULL);
}
