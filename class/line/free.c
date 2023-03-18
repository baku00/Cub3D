/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:03:02 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/16 21:00:47 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

void	*clear_line(t_line *line)
{
	if (line->line)
		free(line->line);
	free(line);
	return (NULL);
}

void	*clear_all_line(t_line *line)
{
	while (line->next)
	{
		line = line->next;
		clear_line(line->prev);
	}
	if (line)
		clear_line(line);
	return (NULL);
}
