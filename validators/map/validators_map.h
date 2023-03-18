/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators_map.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:01:09 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 20:01:35 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATORS_MAP_H
# define VALIDATORS_MAP_H
# include "../validators.h"

int		validate_colors(int	rgb[3]);
int		validate_texture_path(char *path);
int		validate_chars(t_line *line);
int		validate_config(t_map *map);
void	*free_chars(int *chars);
int		validate_map_format();
int		*get_chars();
#endif
