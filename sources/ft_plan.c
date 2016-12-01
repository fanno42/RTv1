/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 16:36:40 by fanno             #+#    #+#             */
/*   Updated: 2016/11/30 18:16:56 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

t_point		new_point(float x, float y, float z)
{
	t_point		point;

	point.x = x;
	point.y = y;
	point.z = z;
	return (point);
}

static t_point	plan(t_plan plan, t_point inter, t_vector ray)
{
	t_point		normal;

	normal = vector_dir(create_point(0, 0, 0),
			new_point(plan.a + cos(inter.x * plan.def.x) * plan.def.x,
				plan.b + cos(inter.y * plan.def.y) * plan.def.y,
				plan.c + cos(inter.z * plan.def.z) * plan.def.z));
	if (pro_scal(ray.dir, normal) < 0)
		return (new_point(-normal.x, -normal.y, -normal.z));
	return (normal);
}

static float	norm_x(t_obj obj, t_point inter)
{
	float		x;

	x = inter.x - floor(in
}
