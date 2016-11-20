/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:35:28 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 10:46:09 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	newstr = NULL;
	if (s == NULL || ft_strlen(s) < start + len)
		return (NULL);
	newstr = (char*)malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	newstr = ft_strncpy(newstr, s + start, len);
	newstr[len] = '\0';
	return (newstr);
}
