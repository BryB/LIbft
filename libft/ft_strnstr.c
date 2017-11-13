/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 04:12:30 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/18 19:25:48 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;
	int s;
	int r;

	r = 0;
	i = 0;
	s = (int)len;
	if (!little[0])
		return ((char *)big);
	while (big[i] && s > 0)
	{
		j = 0;
		while (big[i] && big[i] == little[j] && s > 0)
		{
			i++;
			j++;
			s--;
		}
		if (!little[j])
			return ((char *)&big[i - j]);
		s = s + j - 1;
		i = ((i + 1) - j);
	}
	return (0);
}
