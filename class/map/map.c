/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:57:25 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 04:08:51 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_map.h"

void	clear_map(t_map *map)
{
	clear_wall(map->wall);
	clear_sky(map->sky);
	clear_space(map->space);
	free(map);
}

t_map	*create_map(char *map_name)
{
	t_map	*map;

	map = ft_calloc(sizeof(t_map), 1);
	if (!map)
		return (NULL);
	map->wall = (t_wall *) get_element_from_file(WALL, map_name);
	map->sky = (t_sky *) get_element_from_file(SKY, map_name);
	map->space = (t_space *) get_element_from_file(SPACE, map_name);
	printf("Sky:\n");
	printf("\tRed: %d\n", ((t_sky *) map->sky)->red);
	printf("\tGreen: %d\n", ((t_sky *) map->sky)->green);
	printf("\tBlue: %d\n", ((t_sky *) map->sky)->blue);
	printf("Space:\n");
	printf("\tRed: %d\n", ((t_space *) map->space)->red);
	printf("\tGreen: %d\n", ((t_space *) map->space)->green);
	printf("\tBlue: %d\n", ((t_space *) map->space)->blue);
	return (map);
}
