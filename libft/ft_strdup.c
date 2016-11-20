/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 12:18:07 by fanno             #+#    #+#             */
/*   Updated: 2016/11/15 10:45:10 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
		i++;
	tmp = (char*)malloc(sizeof(char) * (i + 1));
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
