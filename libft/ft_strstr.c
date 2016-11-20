/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:19:23 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 10:43:29 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strstr(const char *str, const char *src)
{
	size_t	i;
	size_t	y;
	size_t	tmp;

	tmp = 0;
	i = 0;
	y = 0;
	if (*src == 0)
		return ((char*)str);
	while (str[i] != '\0')
	{
		tmp = i;
		while (str[tmp] == src[y] && src[y] != '\0')
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
