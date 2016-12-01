/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RTv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:39:36 by fanno             #+#    #+#             */
/*   Updated: 2016/11/30 12:38:09 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
# define RT_V1_H

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

typedef struct		s_point
{
	float			x;
	float			y;
	float			z;
}					t_point;

typedef struct		s_vector
{
	t_point			*origin;
	t_point			dir;
}					t_vector;

typedef struct		s_file
{
	char			**content;
	char			*filename;
	int				fd;
}					t_file

typedef struct		s_sphere
{
	t_point			center;
	float			radius;
}					t_sphere

typedef struct		s_obj
{
	t_point			(*normal)(struct s_obj, t_point, t_vector);
	t_color			(*texturing)(struct s_obj, t_point, t_vector);
	int				(*fonc)(struct s_obj, t_vector, double *);
	void			*obj;
	t_color			color;
	float			brightness;
	float			spec;
	float			transpa;
	float			id;
	float			indice;
	t_img			*texture;
	t_img			*normal_map;
	int				rep;
	float			text_x;
	float			text_y;
	float			offset_x;
	float			offset_y;
}					t_obj;

typedef struct		s_cylinder
{
	t_point			center;
	t_point			top;
	t_point			bot;
	t_rotation		rot;
	float			radius;
	float			height;
}					t_cylinder

typedef struct		s_cone
{
	t_point			center;
	t_point			dir;
	t_rotation		rot;
	float			angle;
	float			top;
	float			bot;
}					t_cone;

typedef struct		s_plan
{
	float			a;
	float			b;
	float			c;
	float			d;
	t_point			def;
}					t_plan

typedef	struct		s_all
{
	t_env			*en;
	t_point			*ve;
	t_file			*fi;
}					t_all

/*
** Keys
*/

# define KEY_Q 12
# define KEY_W 13
# define KEY_E 14
# define KEY_R 15
# define KEY_T 17
# define KEY_Y 16
# define KEY_U 32
# define KEY_I 34
# define KEY_O 31
# define KEY_P 35
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_F 3
# define KEY_G 5
# define KEY_H 4
# define KEY_J 38
# define KEY_K 40
# define KEY_L 37
# define KEY_Z 6
# define KEY_X 7
# define KEY_C 8
# define KEY_V 9
# define KEY_B 11
# define KEY_N 45
# define KEY_M 46
# define KEY_1 18
# define KEY_2 19
# define KEY_3 20
# define KEY_4 21
# define KEY_5 23
# define KEY_6 22
# define KEY_7 26
# define KEY_8 28
# define KEY_9 25
# define KEY_0 29
# define KEY_F1 122
# define KEY_F2 120
# define KEY_F3 99
# define KEY_F4 118
# define KEY_F5 96
# define KEY_F6 97
# define KEY_F7 98
# define KEY_F8 100
# define KEY_F9 101
# define KEY_F10 109
# define KEY_F11 103
# define KEY_F12 111
# define KEY_LEFT 123
# define KEY_RIGHT 124
# define KEY_UP 126
# define KEY_DOWN 125
# define KEY_TAB 48
# define KEY_SHIFTL 257
# define KEY_FN 279
# define KEY_CTRL 256
# define KEY_ALTL 261
# define KEY_CMDL 259
# define KEY_CMDR 260
# define KEY_SPACE 49
# define KEY_ALTR 262
# define KEY_ENTER 36
# define KEY_MINUS 27
# define KEY_EQUAL 24
# define KEY_BACKSPACE 51
# define KEY_BRACKETL 33
# define KEY_BRACKETR 30
# define KEY_ANTISLASH 42
# define KEY_ESC 53
# define KEY_TILT 50
# define KEY_COMMA 43
# define KEY_DOT 47
# define KEY_SLASH 44
# define KEY_SEMICOLON 41
# define MOUSE_WHEEL_DOWN 5
# define MOUSE_WHEEL_UP 4
# define KEY_APO 3

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
