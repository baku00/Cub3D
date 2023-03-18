/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:38:19 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 21:08:06 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_config.h"

char	*get_texture(t_line *line, char *request)
{
	int		i;
	char	*str;

	str = NULL;
	while (line)
	{
		if (line->line && ft_str_startwith(line->line, request))
		{
			i = ft_strlen(request);
			while (line->line[i] && line->line[i] == ' ')
				i++;
			str = ft_substr(line->line, i, line->length - (i + 1));
			return (str);
		}
		if (line->next)
			line = line->next;
		else
			break ;
	}
	return (str);
}

void	get_rgb(int (*rgb)[3], t_line *line, char *request)
{
	int		i;
	int		j;
	char	*str;
	int		color;

	color = 0;
	while (line && line->line && !ft_str_startwith(line->line, request))
	{
		if (line->next)
			line = line->next;
		else
			break ;
	}
	if (!line || !line->line)
		return ;
	i = 0;
	while (line->line[i])
	{
		while (line->line[i] && !ft_isdigit(line->line[i]))
			i++;
		j = i;
		while (line->line[j] && line->line[j] != ',')
			j++;
		str = ft_substr(line->line, i, j - i);
		i = j;
		if (!str)
			return ;
		if (!ft_strlen(str))
		{
			free(str);
			return ;
		}
		(*rgb)[color] = ft_atoi(str);
		if ((*rgb)[color] > 255)
			(*rgb)[color] = -1;
		free(str);
		str = NULL;
		color++;
	}
}

int	get_cols(t_line *line)
{
	int	cols;

	cols = 0;
	line = get_last_line(line);
	while (line && line->length > 1 && line->prev)
	{
		if (line->length > cols)
			cols = line->length;
		line = line->prev;
	}
	if (line && line->length > cols)
		cols = line->length;
	return (cols - 1);
}

int	get_rows(t_line *line)
{
	int	rows;

	rows = 0;
	line = get_last_line(line);
	while (line && line->length > 1 && line->prev)
	{
		rows++;
		line = line->prev;
	}
	printf("rows: %d\n", rows);
	return (rows);
}
