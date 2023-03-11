/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types_map.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:14:27 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 03:58:38 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_MAP_H
# define TYPES_MAP_H
# include "../class.h"
# define PLAYER 10
# define WALL 20
# define SPACE 30
# define VOID 40
# define SKY 50

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

typedef struct s_sky
{
	int	red;
	int	green;
	int	blue;
}	t_sky;

typedef struct s_player
{
	int	direction;
}	t_player;

typedef struct s_element
{
	int		type;
	void	*element;
}	t_element;

typedef struct s_map
{
	t_player	*player;
	t_wall		*wall;
	t_sky		*sky;
	t_space		*space;
	int			**cases;
}	t_map;

#endif
