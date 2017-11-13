/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb_extractwrd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:12:27 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 09:28:11 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*bb_extractwrd(const char *str, char delim, int *i)
{
	int		c;
	int		j;
	char	*wrd;

	*i = *i - 1;
	j = 0;
	if (!str)
		return (NULL);
	while (str[++(*i)])
	{
		if (str[(*i)] != delim)
		{
			if (str[(*i) + 1] == delim || str[(*i) + 1] == '\0')
				break ;
			j++;
		}
	}
	c = *i;
	wrd = (char *)malloc(sizeof(char) * j + 1);
	if(!wrd)
		return(NULL);
	wrd[j + 1] = '\0';
	while (j >= 0)
		wrd[j--] = str[c--];
	return (wrd);
}
