/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:14:37 by fanno             #+#    #+#             */
/*   Updated: 2016/11/24 16:36:25 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

t_point			vector_add(t_point v1, t_point v2)
{
	v1.x = v1.x + v2.x;
	v1.y = v1.y + v2.y;
	v1.z = v1.z + v2.z;
	return (v1);
}

t_point			vector_sub(t_point v1, t_point v2)
{
	v1.x = v1.x - v2.x;
	v1.y = v1.y - v2.y;
	v1.z = v1.z - v2.z;
	return (v1);
}

t_point			vector_div(t_point v1, t_point v2)
{
	v1.x = v1.x / v2.x;
	v1.y = v1.y / v2.y;
	v1.z = v1.z / v2.z;
	return (v1);
}

t_point			vector_mul(t_point v1, t_point v2)
{
	v1.x = v1.x / v2.x;
	v1.y = v1.y / v2.y;
	v1.z = v1.z / v1.z;
	return (v1);
}

static t_point		vector_nor(t_point *v)
{
	float		normal;

	size = sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));
	v->x /= size;
	v->y /= size;
	v->z /= size;
	return (normal);
}
