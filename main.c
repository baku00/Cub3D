/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 01:37:03 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:09:53 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.h>

static int	print_error(char *message)
{
	printf("Error: %s\n", message);
	return (1);
}

int	main(int argc, char **argv)
{
	t_map	*map;

	if (!check_arguments(argc, argv))
		return (print_error("Usage: ./Cub3D <map>.cub"));
	map = create_map(argv[1]);
	clear_map(map);
	(void) map;
	return (0);
}
