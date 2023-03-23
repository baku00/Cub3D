/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_config.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:02:59 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/22 20:20:38 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_map.h"

int	validate_colors(int	rgb[3])
{
	return (rgb[0] >= 0 && rgb[1] >= 0 && rgb[1] >= 0);
}

int	validate_texture_path(char *path)
{
	return (ft_strlen(path) > 0);
}

int	validate_direction(int *chars)
{
	if (chars['S'] > 1 || chars['N'] > 1 || chars['E'] > 1 || chars['W'] > 1)
		return (0);
	else if (chars['S'] == 0 && chars['N'] == 0 && chars['E'] == 0 && chars['W'] == 0)
		return (0);
	if (chars['S'] == 1)
		return (chars['N'] == 0 && chars['E'] == 0 && chars['W'] == 0);
	else if (chars['N'] == 1)
		return (chars['S'] == 0 && chars['E'] == 0 && chars['W'] == 0);
	else if (chars['E'] == 1)
		return (chars['S'] == 0 && chars['N'] == 0 && chars['W'] == 0);
	else if (chars['W'] == 1)
		return (chars['S'] == 0 && chars['N'] == 0 && chars['E'] == 0);
	return (1);
}

int	validate_chars(t_line *line)
{
	int	*chars;
	int	i;

	chars = get_chars();
	if (!chars)
		return (0);
	while (line)
	{
		i = -1;
		while (line->line && line->line[++i])
		{
			if (chars[(int) line->line[i]] == -1)
				return (!!free_chars(chars));
			chars[(int) line->line[i]]++;
		}
		if (line->next)
			line = line->next;
		else
			break;
	}
	if (!validate_direction(chars))
		return (!!free_chars(chars));
	return (!free_chars(chars));
}

int	validate_config(t_map *map)
{
	if (!validate_chars(map->line))
		return (0);
	if (!validate_colors(map->config.floor) || \
		!validate_colors(map->config.crood))
		return (0);
	if (!validate_texture_path(map->config.north) || \
		!validate_texture_path(map->config.south) || \
		!validate_texture_path(map->config.east) || \
		!validate_texture_path(map->config.west))
		return (0);
	return (1);
}
