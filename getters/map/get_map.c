/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:02:59 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 17:33:14 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getters_map.h"

void	*free_map(int rows, int i, int **points)
{
	while (i < rows)
	{
		free(points[i]);
	}
	free(points);
	return (NULL);
}

int	**get_map(t_config config, t_line *line)
{
	int	**points;
	int	i;
	int	j;

	points = ft_calloc(sizeof(int *), config.rows);
	if (!points)
		return (NULL);
	i = -1;
	while (++i < config.rows)
	{
		points[i] = ft_calloc(sizeof(int), config.cols);
		if (!points[i])
			return (free_map(config.rows, i, points));
		j = -1;
		while (++j < config.cols)
		{
			if (j < line->length - 1)
				points[i][j] = line->line[j];
			else
				points[i][j] = ' ';
		}
		line = line->next;
	}
	return (points);
}
