/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 11:01:06 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/23 11:05:35 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		bb_isspace(char *str, int size ,unsigned int dir)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	if (dir == 0 && i < size)
	{
		i = 0;
		while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
		return (i);
	}
	if (dir == 1 && size > 0)
	{
		while (str[size] == '\t'  || str[size] == '\n' || str[size] == '\v' ||
				str[size] == '\f' || str[size] == '\r' || str[size] == ' ')
			size--;
		return (size);
	}
	return (0);
}
