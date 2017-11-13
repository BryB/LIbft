/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 06:54:05 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 04:39:05 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	int i;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char )c)
			return (str + i);
		i++;
	}
	if(str[i] == (char )c)
		return (str + i);
	return (NULL);
}
