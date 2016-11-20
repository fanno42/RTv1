/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:25:27 by fanno             #+#    #+#             */
/*   Updated: 2016/11/16 11:50:25 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

t_vector	create_vector(double x, double y, double z)
{
	t_vector	new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}

void		vector_dist(t_vetor *v1, t_vector *v2)
{
	return (sqrt(((v1->x - v2->x) * (v2->x - v2->x)) + 
		   ((v1->y - v2->y) * (v1->y - v2->y)) + 
		   ((v1->z - v2->z) * (v1->z - v2->z))));
}

double		pro_scal(t_vector v1, t_vector v2)
{
	return ((v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z));
}

double		norm_vec(t_vector *v)
{
	return (sqrt(((v->x) * (v->x)) + ((v->y) * (v->y)) + ((v->z) * (v->z))));
}
