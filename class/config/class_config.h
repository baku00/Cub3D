/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_config.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:03:15 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 21:07:53 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONFIG_H
# define CLASS_CONFIG_H
# include "../class.h"

t_config	init_config(void);
t_config	create_config(t_line *line);
void		*clear_config(t_config *config);
char		*get_texture(t_line *line, char *request);
void		get_rgb(int (*rgb)[3], t_line *line, char *request);
int			get_cols(t_line *line);
int			get_rows(t_line *line);
#endif
