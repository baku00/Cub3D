/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 02:03:57 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 03:01:19 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checkers_arguments.h"

int	check_number_arguments(int argc)
{
	return (argc == 2);
}

int	check_arguments(int argc, char **argv)
{
	if (!check_number_arguments(argc))
		return (0);
	if (!check_map_name(argv[1]))
		return (0);
	return (1);
}
