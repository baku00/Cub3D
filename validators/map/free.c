/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:10:06 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 16:10:18 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_map.h"

void	*free_chars(int *chars)
{
	free(chars);
	return (NULL);
}