/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:56:25 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/17 18:44:21 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_config.h"

t_config	init_config()
{
	t_config	config;

	config.cols = 0;
	config.rows = 0;
	config.crood[0] = -1;
	config.crood[1] = -1;
	config.crood[2] = -1;
	config.floor[0] = -1;
	config.floor[1] = -1;
	config.floor[2] = -1;
	config.east = NULL;
	config.west = NULL;
	config.north = NULL;
	config.south = NULL;
	return (config);
}

t_config	create_config(t_line *line)
{
	t_config	config;

	config = init_config();
	get_rgb(&config.floor, line, "F ");
	get_rgb(&config.crood, line, "C ");
	config.east = get_texture(line, "EA ");
	config.west = get_texture(line, "WE ");
	config.north = get_texture(line, "NO ");
	config.south = get_texture(line, "SO ");
	config.cols = get_cols(line);
	config.rows = get_rows(line);
	return (config);
}
