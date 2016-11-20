/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 15:05:21 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:27:36 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstr = NULL;
	newstr = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (newstr ? ft_strcat(ft_strcpy(newstr, s1), s2) : NULL);
}
