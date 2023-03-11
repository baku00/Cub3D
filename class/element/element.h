/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:16:21 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:38:01 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ELEMENT_H
# define CLASS_ELEMENT_H
# include "../class.h"

t_element	*create_element(int type, \
							void *top, void *bottom, void *left, void *right, \
							void *element);
#endif