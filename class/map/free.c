/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:03:02 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/22 20:31:40 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	*clear_all_points(t_config config, int **points)
{
	config.rows--;
	while (points && config.rows >= 0)
	{
		free(points[config.rows]);
		config.rows--;
	}
	if (points)
		free(points);
	return (NULL);
}

void	*clear_map(t_map *map)
{
	clear_all_line(map->line);
	clear_all_points(map->config, map->points);
	clear_config(&map->config);
	free(map);
	return (NULL);
}
