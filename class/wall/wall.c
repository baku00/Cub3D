/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:03:57 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 03:42:29 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_wall.h"

void	clear_wall(t_wall *wall)
{
	free(wall->east_texture);
	free(wall->north_texture);
	free(wall->south_texture);
	free(wall->west_texture);
	free(wall);
}

char	*get_texture(char *line)
{
	int	i;

	i = 3;
	while (line[i] && line[i] == ' ')
		i++;
	if (!line[i])
		return (NULL);
	return (ft_substr(line, i, ft_strlen(line) - i));
}

void	get_wall_texture(t_wall **wall, int fd)
{
	char	*line;

	line = get_next_line(fd);
	while (line)
	{
		if (ft_str_startwith(line, "NO "))
			(*wall)->north_texture = get_texture(line);
		else if (ft_str_startwith(line, "SO "))
			(*wall)->south_texture = get_texture(line);
		else if (ft_str_startwith(line, "WE "))
			(*wall)->west_texture = get_texture(line);
		else if (ft_str_startwith(line, "EA "))
			(*wall)->east_texture = get_texture(line);
		free(line);
		line = get_next_line(fd);
	}
}

t_wall	*init_wall(void)
{
	t_wall	*wall;

	wall = ft_calloc(sizeof(t_wall), 1);
	if (!wall)
		return (NULL);
	wall->east_texture = NULL;
	wall->north_texture = NULL;
	wall->south_texture = NULL;
	wall->west_texture = NULL;
	return (wall);
}

t_wall	*get_wall_from_file(char *map_name)
{
	t_wall	*wall;
	int		fd;

	wall = init_wall();
	if (!wall)
		return (NULL);
	fd = open(map_name, O_RDONLY);
	if (fd < 0)
		return (NULL);
	get_wall_texture(&wall, fd);
	close (fd);
	return (wall);
}
