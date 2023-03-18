/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:10:37 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/18 16:10:45 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validators_map.h"

int	*get_chars()
{
	int	*chars;
	int		i;

	i = -1;
	chars = ft_calloc(sizeof(int), 255);
	if (!chars)
		return (NULL);
	while (++i < 255)
		chars[i] = -1;
	chars[' '] = 0;
	chars['0'] = 0;
	chars['1'] = 0;
	chars['S'] = 0;
	chars['N'] = 0;
	chars['E'] = 0;
	chars['W'] = 0;
	return (chars);
}
