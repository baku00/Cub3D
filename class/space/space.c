/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:03:57 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 04:09:33 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_space.h"

void	clear_space(t_space *space)
{
	free(space);
}

static int	get_color(int	*i, char *line)
{
	int		start;
	char	*color;
	int		integer;

	start = *i;
	while (line[*i] && line[*i] != ',')
		*i += 1;
	color = ft_substr(line, start, *i - start);
	if (!color)
		return (-1);
	integer = ft_atoi(color);
	if (integer > 255)
		integer = -1;
	free(color);
	return (integer);
}

static void	get_colors(t_space **space, char *line)
{
	int		i;

	i = 2;
	while (line[i] && line[i] == ' ')
		i++;
	if (!line[i])
		return ;
	(*space)->red = get_color(&i, line);
	i += 1;
	(*space)->green = get_color(&i, line);
	i += 1;
	(*space)->blue = get_color(&i, line);
}

t_space	*init_space(void)
{
	t_space	*space;

	space = ft_calloc(sizeof(t_space), 1);
	if (!space)
		return (NULL);
	space->red = -1;
	space->green = -1;
	space->blue = -1;
	return (space);
}

t_space	*get_space_from_file(char *map_name)
{
	t_space	*space;
	int		fd;
	char	*line;

	space = init_space();
	if (!space)
		return (NULL);
	fd = open(map_name, O_RDONLY);
	if (fd < 0)
		return (NULL);
	line = get_next_line(fd);
	while (line)
	{
		if (ft_str_startwith(line, "F "))
			get_colors(&space, line);
		free(line);
		line = get_next_line(fd);
	}
	if (space->red < 0 || space->green < 0 || space->blue < 0)
		return (NULL);
	close (fd);
	return (space);
}
