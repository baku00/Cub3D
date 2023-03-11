/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 03:03:57 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 04:09:44 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_sky.h"

void	clear_sky(t_sky *sky)
{
	free(sky);
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

static void	get_colors(t_sky **sky, char *line)
{
	int		i;

	i = 2;
	while (line[i] && line[i] == ' ')
		i++;
	if (!line[i])
		return ;
	(*sky)->red = get_color(&i, line);
	i += 1;
	(*sky)->green = get_color(&i, line);
	i += 1;
	(*sky)->blue = get_color(&i, line);
}

t_sky	*init_sky(void)
{
	t_sky	*sky;

	sky = ft_calloc(sizeof(t_sky), 1);
	if (!sky)
		return (NULL);
	sky->red = -1;
	sky->green = -1;
	sky->blue = -1;
	return (sky);
}

t_sky	*get_sky_from_file(char *map_name)
{
	t_sky	*sky;
	int		fd;
	char	*line;

	sky = init_sky();
	if (!sky)
		return (NULL);
	fd = open(map_name, O_RDONLY);
	if (fd < 0)
		return (NULL);
	line = get_next_line(fd);
	while (line)
	{
		if (ft_str_startwith(line, "C "))
			get_colors(&sky, line);
		free(line);
		line = get_next_line(fd);
	}
	if (sky->red < 0 || sky->green < 0 || sky->blue < 0)
		return (NULL);
	close (fd);
	return (sky);
}
