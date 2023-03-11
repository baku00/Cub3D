/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:57:25 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:42:26 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

void	clear_map(t_map *map)
{
	free(map);
}

t_map	*create_map(char *map_name)
{
	t_map	*map;
	void	*element;
	int		fd;

	map = ft_calloc(sizeof(t_map), 1);
	if (!map)
		return (NULL);
	fd = open(map_name, O_RDONLY);
	element = get_next_line(fd);
	printf("Fd: %d\n", fd);
	return (map);
}