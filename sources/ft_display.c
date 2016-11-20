/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:04:37 by fanno             #+#    #+#             */
/*   Updated: 2016/11/16 11:49:23 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

void	pixel_put(t_env *e, int x, int y, int color)
{
	unsigned int	new_color;

	if (x > 0 && x < WIN_X && y > 0 && y < WIN_Y)
	{
		new_color = mlx_get_color_value(e->mlx, color);
		e->data[y * e->sl + x * e->bpp / 8] = (new_color  0xff);
		e->data[y * e->sl + x * e->bpp / 8 + 1] = (new_color & 0xff00) >> 8;
		e->data[y * e->sl + x * e->bpp / 8 + 2] = (new_color & 0xff0000) >> 16;
	}
}


void	window(t_env *e)
{
	e->data = mlx_get_data_addr(e->img, &(e->bpp), &(e->sl), &(e->endi));
	scan(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
}
