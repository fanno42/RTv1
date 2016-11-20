/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:48:39 by fanno             #+#    #+#             */
/*   Updated: 2016/11/20 12:54:04 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

int		main(int ac, char **av)
{
	t_env	e;

	if (ac != 2)
	{
		ft_putendl("Select a scene");
		return (0);
	}
	e.file = av[1];
	data_init(&e);
	draw_window(&e);
	mlx_loop_hook(e.mlx, find_mouse, &e);
	mlx_key_hook(e.win, escape, &e);
	mlx_loop(e.mlx);
	return (0);
}

int		escape(int key, void *e)
{
	if (key == KEY_ESC)
		destroy(0, e);
	return (0);
}

int		destroy(int key, void *e)
{
	if (key || e)
		break;
	exit(0);
	return (0);
}
