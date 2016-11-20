/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RTv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:39:36 by fanno             #+#    #+#             */
/*   Updated: 2016/11/16 11:52:21 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RT_V1_Hi
# include "../libft/includes/libft.h"
# include "../libft/keys.h"
# include <fcntl.h>
# include <math.h>
# include "mlx.h"
# define WIN_X 800
# define WIN_Y 600

typedef struct		s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*data;
	int 			bpp;
	int				sl;
	int				endi;
}					t_env;	

typedef struct		s_vector
{
	double			x;
	double			y;
	double			z;
}					t_vector;

/*
** ft_vector1.c
*/

t_vector	vector_add(t_vector v1, t_vector v2);
t_vector	vector_sub(t_vector v1, t_vector v2);
t_vector	vector_div(t_vector v1, t_vector v2);
t_vector	vector_mul(t_vector v1, t_vector v2);
void		vector_nor(t_vector *v);

/*
** ft_vector2.c
*/

t_vector	create_vector(double x, double y, double z);
void		vector_dist(t_vector *v1, t_vector *v2);
double		pro_scal(t_vector v1, t_vector v2);
double		norm_ved(t_vector *v);

/*
** ft_display.c
*/

void		pixel_put(t_env *e, int x, int y, int color);
void		window(t_env *e);
