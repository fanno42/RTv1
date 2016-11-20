/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:14:37 by fanno             #+#    #+#             */
/*   Updated: 2016/11/16 11:50:05 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

t_vector	vector_add(t_vector	v1, t_vector v2)
{
	v1.x = v1.x + v2.x;
	v1.y = v1.y + v2.y;
	v1.z = v1.z + v2.z;
	return (v1);
}

t_vector	vector_sub(t_vector v1, t_vector v2)
{
	v1.x = v1.x - v2.x;
	v1.y = v1.y - v2.y;
	v1.z = v1.z - v2.z;
	return (v1);
}

t_vector	vector_div(t_vector v1, t_vector v2)
{
	v1.x = v1.x / v2.x;
	v1.y = v1.y / v2.y;
	v1.z = v1.z / v2.z;
	return (v1);
}

t_vector	vector_mul(t_vector v1, t_vector v2)
{
	v1.x = v1.x / v2.x;
	v1.y = v1.y / v2.y;
	v1.z = v1.z / v1.z;
	return (v1);
}

void		vector_nor(t_vector *v)
{
	double		size;

	size = sqrt(((v->x) * (v->x)) + ((v->y) * (v->y)) + ((v->z) * (v->z)));
	v->x /= size;
	v->y /= size;
	v->z /= size;
}
