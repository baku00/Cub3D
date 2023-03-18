/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:40:25 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/17 21:47:43 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

t_map	*init_map()
{
	t_map	*map;

	map = ft_calloc(sizeof(t_map), 1);
	if (!map)
		return (NULL);
	map->line = NULL;
	return (map);
}

t_map	*create_map()
{
	t_map	*map;

	map = init_map();
	if (!map)
		return (NULL);
	map->config = init_config();
	return (map);
}

void	fix_carte(t_line **line)
{
	t_line	*limit;

	*line = get_last_line(*line);
	while ((*line) && (*line)->length >= 2 && (*line)->prev)
		(*line) = (*line)->prev;
	limit = (*line);
	if (*line && (*line)->next)
		limit = (*line)->next;
	while ((*line)->prev)
		(*line) = (*line)->prev;
	while (*line != limit)
	{
		*line = (*line)->next;
		clear_line((*line)->prev);
		(*line)->prev = NULL;
	}
}
