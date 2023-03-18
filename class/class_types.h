/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_types.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:58:44 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/17 19:06:44 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_TYPES_H
# define CLASS_TYPES_H

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
}	t_map;
#endif
