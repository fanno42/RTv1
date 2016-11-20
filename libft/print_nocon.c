/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nocon.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 10:42:34 by fanno             #+#    #+#             */
/*   Updated: 2016/11/16 10:49:58 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static void	do_norm(t_form *info, int ret, int *newret, char ospace)
{
	if (info->left == 0)
	{
		while (info->width - ret > 0)
		{
			*newret += 1;
			ft_putchar(ospace);
			if (info->width > 0)
				info->width--;
			if (info->prec > 0)
				info->prec--;
		}
	}
}

static void	do_left(t_form *info, int ret, int *newret, char ospace)
{
	if (info->left == 1)
	{
		while (info->prec - info->width - ret > 0)
		{
			ft_putchar(ospace);
			if (info->width > 0)
				info->width--;
			if (info->prec > 0)
				info->prec--;
			*newret += 1;
		}
		while (info->width - ret)
		{
			ft_putchar(ospace);
			info->width--;
			*newret += 1;
		}
	}
}

int			print_nocon(t_form *info, int ret)
{
	int		newret;
	char	ospace;

	ospace = info->zero == 1 ? '0' : ' ';
	newret = 0;
	if (info->prec == -1)
		info->prec = 0;
	if (info->width == -1)
		info->width = 0;
	do_norm(info, ret, &newret, ospace);
	do_left(info, ret, &newret, ospace);
	return (ret + newret);
}
