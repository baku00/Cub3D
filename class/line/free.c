/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:03:02 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/20 19:54:37 by my_name_         ###   ########.fr       */
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
	while (line && line->next)
	{
		line = line->next;
		// printf("Line\n");
		// printf("\tAddress: %p\n", line);
		// printf("\tLine: %s\n", line->line);
		// printf("\tLength: %d\n", line->length);
		// printf("\tNext: %p\n", line->next);
		// printf("\tPrev: %p\n", line->prev);
		clear_line(line->prev);
		// printf("Line after clear\n");
		// printf("\tAddress: %p\n", line);
		// printf("\tLine: %s\n", line->line);
		// printf("\tLength: %d\n", line->length);
		// printf("\tNext: %p\n", line->next);
		// printf("\tPrev: %p\n", line->prev);
	}
	if (line)
		clear_line(line);
	return (NULL);
}
