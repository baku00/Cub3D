/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_name.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:02:59 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 01:11:04 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "map.h"

int	check_map_name(char *map_name)
{
	if (!map_name)
		return (0);
	if (ft_strlen(map_name) < 5)
		return (0);
	return (ft_str_endwith(map_name, MAP_NAME_EXTENSION));
}
