/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_sky.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:13 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 03:45:10 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_SKY_H
# define CLASS_SKY_H
# include "../class.h"

t_sky	*get_sky_from_file(char *map_name);
void	clear_sky(t_sky *sky);
#endif
