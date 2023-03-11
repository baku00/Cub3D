/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_startwith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:05:55 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 02:55:17 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_startwith(const char *str, const char *pattern)
{
	int	pattern_length;
	int	str_length;
	int	i;

	if (!str || !pattern)
		return (!pattern && !str);
	pattern_length = ft_strlen(pattern) - 1;
	str_length = ft_strlen(str) - 1;
	if (str_length < pattern_length)
		return (0);
	i = 0;
	while (pattern_length >= 0)
	{
		if (str[i] != pattern[i])
			return (0);
		pattern_length--;
		i++;
	}
	return (1);
}
