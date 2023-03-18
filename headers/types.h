/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:58:44 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 17:55:58 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

typedef struct s_config
{
	char	*north;
	char	*south;
	char	*east;
	char	*west;
	int		floor[3];
	int		crood[3];
	int		rows;
	int		cols;
}	t_config;

typedef struct s_line
{
	char	*line;
	int		length;
	int		validate;
	void	*prev;
	void	*next;
}	t_line;

typedef struct s_map
{
	t_config	config;
	t_line		*line;
	int			**points;
}	t_map;
#endif
