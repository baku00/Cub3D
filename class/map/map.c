/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:57:25 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 03:38:58 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_map.h"

void	clear_map(t_map *map)
{
	clear_wall(map->wall);
	free(map);
}

t_map	*create_map(char *map_name)
{
	t_map	*map;

	map = ft_calloc(sizeof(t_map), 1);
	if (!map)
		return (NULL);
	map->wall = (t_wall *) get_element_from_file(WALL, map_name);
	return (map);
}
