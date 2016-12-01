/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanno <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:36:23 by fanno             #+#    #+#             */
/*   Updated: 2016/11/22 13:50:50 by fanno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RTv1.h"

int		get_file(t_all *a, t_file *f)
{
	int			i;
	char		*line;
	int			ret;

	i = 0;
	file->fd = open(file->filename, O_RDONLY);
	while ((ret = get_next_line(file->fd, &line)) > 0)
	{
		if (line[0] != '\t')
//	strcmp des entites recherchees jusqu'au premier {
		else if (line[0] != '}' || !line[1])
		{
// fin de la prise d'info			if (get_data(f, line) == -1)
//				return (-1);
		}
		free(line);
		i++;
	}
	if (ret <= 0 && i == 0)
		return (-1);
	close(f->fd);
	return (0);
}
