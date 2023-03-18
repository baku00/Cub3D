/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:03:15 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/16 21:25:06 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_H
# define LINE_H
# include "../class.h"

t_line	*get_all_line(t_config *config, t_line *prev, int fd);
t_line	*read_file(t_config *config, char *filename);
void	*clear_line(t_line *line);
void	*clear_all_line(t_line *line);
t_line	*get_last_line(t_line *line);
#endif
