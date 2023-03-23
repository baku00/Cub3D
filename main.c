/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:37:03 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/22 20:29:59 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

static int	print_error(char *message)
{
	printf("Error: %s\n", message);
	return (1);
}

void	print_config(t_config config)
{
	printf("Cols: (%d)\n", config.cols);
	printf("Rows: (%d)\n", config.rows);
}

void	print_texture(t_config config)
{
	printf("NO: (%s)\n", config.north);
	printf("SO: (%s)\n", config.south);
	printf("EA: (%s)\n", config.east);
	printf("WE: (%s)\n", config.west);
}

void	print_floor(t_config config)
{
	printf("Floor\n");
	printf("R: (%d)\n", config.floor[0]);
	printf("G: (%d)\n", config.floor[1]);
	printf("B: (%d)\n", config.floor[2]);
}

void	print_crood(t_config config)
{
	printf("Crood\n");
	printf("R: (%d)\n", config.crood[0]);
	printf("G: (%d)\n", config.crood[1]);
	printf("B: (%d)\n", config.crood[2]);
}

void	print_line(t_line *line)
{
	printf("Line (%p)\n", line);
	while (line && line->line)
	{
		printf("(%s)\n", line->line);
		if (line->next)
			line = line->next;
		else
			break;
	}
	printf("\n");
	
}

void	print_points(t_config config, int **points)
{
	int	i;
	int	j;

	i = -1;
	printf("Points\n");
	while (++i < config.rows)
	{
		j = -1;
		printf("(");
		while (++j < config.cols)
			printf("%d", points[i][j]);
		printf(")\n");
	}
}

int	main(int argc, char **argv)
{
	t_map	*map;

	if (!check_arguments(argc, argv))
		return (print_error("Usage: ./Cub3D <map>.cub"));
	map = create_map();
	if (!map)
		return (1);
	map->line = read_file(&map->config, argv[1]);
	if (!map->line)
		return (!clear_map(map));
	map->config = create_config(map->line);
	fix_carte(&map->line);
	print_config(map->config);
	print_texture(map->config);
	print_floor(map->config);
	print_crood(map->config);
	print_line(map->line);
	if (!validate_config(map))
		return (!clear_map(map));
	map->points = get_map(map->config, map->line);
	print_points(map->config, map->points);
	printf("Validate map: %d\n", validate_map_format(map->config, map->points));
	return (!!clear_map(map));
}
