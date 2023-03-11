/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 20:42:23 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/10 20:43:42 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENTS_H
# define ARGUMENTS_H
# include "../checkers.h"

int	check_number_arguments(int argc);
int	check_map_name(char *map_name);
int	check_arguments(int argc, char **argv);
#endif