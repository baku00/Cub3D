/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_wall.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:13 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 03:39:46 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_WALL_H
# define CLASS_WALL_H
# include "../class.h"

t_wall	*get_wall_from_file(char *map_name);
void	clear_wall(t_wall *wall);
#endif
