/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 03:53:15 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 08:59:13 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ascii;
	int				i;

	i = 0;
	str = (unsigned char *)s;
	ascii = c;
	while (n-- > 0)
	{
		if (str[i] != ascii)
			i++;
		else
			return ((str + i));
	}
	return (NULL);
}
