/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:44:45 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 11:17:49 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	newstr = NULL;
	i = 0;
	if (s == NULL)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (newstr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		newstr[i] = (*f)(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
