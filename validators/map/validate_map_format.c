/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:02:59 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 21:06:21 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_map.h"

int	validate_char(int i, int j, int **points)
{
	if (points[i][j] == '0' || points[i][j] == 'S' || \
		points[i][j] == 'N' || points[i][j] == 'W' || points[i][j] == 'E')
	{
		if ((points[i + 1][j] && points[i + 1][j] == ' ') || \
			(points[i - 1][j] && points[i - 1][j] == ' ') || \
			(points[i][j + 1] && points[i][j + 1] == ' ') || \
			(points[i][j - 1] && points[i][j - 1] == ' '))
			return (0);
	}
	return (1);
}

int	validate_map_format(t_config config, int **points)
{
	int	i;
	int	j;

	i = -1;
	while (++i < config.rows)
	{
		j = -1;
		while (++j < config.cols)
		{
			if (!validate_char(i, j, points))
				return (0);
		}
	}
	return (1);
}
