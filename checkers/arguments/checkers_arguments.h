/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers_arguments.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:42:23 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:59:55 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKERS_ARGUMENTS_H
# define CHECKERS_ARGUMENTS_H
# include "../checkers.h"

int	check_number_arguments(int argc);
int	check_map_name(char *map_name);
int	check_arguments(int argc, char **argv);
#endif