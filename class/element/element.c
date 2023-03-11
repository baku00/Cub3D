/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:53:48 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 04:05:33 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_element.h"

void	*get_element_from_file(int type, char *map_name)
{
	if (type == WALL)
		return (get_wall_from_file(map_name));
	else if (type == SKY)
		return (get_sky_from_file(map_name));
	else if (type == SPACE)
		return (get_space_from_file(map_name));
	return (NULL);
}
