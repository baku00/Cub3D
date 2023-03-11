/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:57:32 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:56:54 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_MAP_H
# define CLASS_MAP_H
# include "../class.h"

t_map	*create_map(char *map_name);
void	clear_map(t_map *map);
#endif
