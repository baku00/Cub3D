/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_space.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:13 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 04:07:02 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_SPACE_H
# define CLASS_SPACE_H
# include "../class.h"

t_space	*get_space_from_file(char *map_name);
void	clear_space(t_space *space);
#endif
