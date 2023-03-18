/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   navigate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:24:14 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/17 19:18:19 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

t_line	*get_last_line(t_line *line)
{
	if (!line)
		return (NULL);
	while (line && line->next)
		line = line->next;
	while (line && line->length < 2 && line->prev)
		line = line->prev;
	return (line);
}
