/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:14:27 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 01:31:08 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_H
# define MAP_H
# define PLAYER 10
# define WALL 20
# define SPACE 30
# define VOID 40

typedef struct s_wall
{
	char	*north_texture;
	char	*south_texture;
	char	*west_texture;
	char	*east_texture;
}	t_wall;

typedef struct s_space
{
	int	red;
	int	green;
	int	blue;
}	t_space;

typedef struct s_player
{
	int	direction;
}	t_player;

typedef struct s_element
{
	int		type;
	void	*element;
}	t_element;

typedef struct s_position
{
	t_position		*top;
	t_position		*bottom;
	t_position		*left;
	t_position		*right;
	t_element		*element;
}	t_position;

typedef struct s_map
{
	t_position	*position;
}	t_map;

#endif