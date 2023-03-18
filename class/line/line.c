/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:03:02 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/17 21:51:10 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "line.h"

t_line	*init_line(t_line *prev, t_line *next)
{
	t_line	*line;

	line = ft_calloc(sizeof(t_line), 1);
	if (!line)
		return (NULL);
	line->line = NULL;
	line->length = 0;
	line->validate = 0;
	line->prev = prev;
	line->next = next;
	return (line);
}

t_line	*get_all_line(t_config *config, t_line *prev, int fd)
{
	t_line	*line;
	char	*char_line;

	line = init_line(prev, NULL);
	if (!line)
		return (NULL);
	char_line = get_next_line(fd);
	if (char_line)
	{
		line->line = ft_strdup(char_line);
		if (!line->line)
			return (clear_line(line));
		line->length = ft_strlen(char_line);
		if (line->line[line->length - 1] == '\n')
			line->line[line->length - 1] = 0;
		free(char_line);
		line->next = get_all_line(config, line, fd);
	}
	return (line);
}

t_line	*read_file(t_config *config, char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd <= 2)
		return (NULL);
	return (get_all_line(config, NULL, fd));
}
