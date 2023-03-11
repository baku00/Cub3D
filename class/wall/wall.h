/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wall.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:13 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:20:13 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_WALL_H
# define CLASS_WALL_H
# include "../class.h"

t_wall	*create_wall(char *north, char *south, char *west, char *east);
#endif