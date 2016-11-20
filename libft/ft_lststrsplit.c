/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lststrsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 11:23:07 by fanno             #+#    #+#             */
/*   Updated: 2016/11/08 14:03:58 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list			*ft_lststrsplit(char *str, char c)
{
	t_list	*lst;
	char	*tmp;
	char	*tmp2;
	int		i;

	lst = NULL;
	while (*str)
	{
		tmp = str;
		i = ft_cut_str(&str, c);
		tmp2 = ft_mallocncopy(tmp, i);
		ft_lstpush(&lst, ft_lstnew(tmp2, i));
		free(tmp2);
		ft_strpush(&str, c);
	}
	return (lst);
}
