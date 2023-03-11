/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_endwith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: my_name_ <my_name_@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:05:55 by my_name_          #+#    #+#             */
/*   Updated: 2023/03/11 01:03:37 by my_name_         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_endwith(const char *str, const char *pattern)
{
	int	pattern_length;
	int	str_length;

	if (!str || !pattern)
		return (!pattern && !str);
	pattern_length = ft_strlen(pattern) - 1;
	str_length = ft_strlen(str) - 1;
	if (str_length < pattern_length)
		return (0);
	while (pattern_length >= 0)
	{
		if (str[str_length] != pattern[pattern_length])
			return (0);
		pattern_length--;
		str_length--;
	}
	return (1);
	
	
}