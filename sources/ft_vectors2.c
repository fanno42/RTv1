/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:25:27 by fanno             #+#    #+#             */
/*   Updated: 2016/11/30 12:38:07 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

static t_point		create_point(float x, float y, float z)
{
	t_point		new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}

void				vector_dist(t_point *v1, t_point *v2)
{
	return (sqrt(((v1->x - v2->x) * (v2->x - v2->x)) +
		((v1->y - v2->y) * (v1->y - v2->y)) +
		((v1->z - v2->z) * (v1->z - v2->z))));
}

float				pro_scal(t_point u, t_point v)
{
	return (u.x * v.x + u.y * v.y + u.z * v.z);
}

t_point				vector_dir(t_point a, t_point b)
{
	t_point			vec_a_b;
	double			normal;

	vec_a_b = create_point(b.x - a.x, b.y - a.y, b.z - a.z);
	normal = sqrt(pow(vec_a_b.x, 2) + pow(vec_a_b, 2) + pow(vec_a_b, 2));
	vec_a_b.x /= normal;
	vec_a_b.y /= normal;
	vec_a_b.z /= normal;
	return (vec_a_b);
}
