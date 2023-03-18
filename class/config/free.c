/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:58:35 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/17 18:45:51 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_config.h"

void	*clear_config(t_config *config)
{
	if (config->east)
		free(config->east);
	if (config->north)
		free(config->north);
	if (config->west)
		free(config->west);
	if (config->south)
		free(config->south);
	return (NULL);
}