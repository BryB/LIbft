/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 03:40:46 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/20 14:36:15 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	if ((!c) || (!s))
		return (NULL);
	arr = bb_arrsize(s, c);
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[j] = bb_extractwrd(s, c, &i);
			while (s[i] != c && s[i + 1] != '\0')
				i++;
			j++;
		}
		i++;
	}
	return (arr);
}
