/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 03:31:07 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 04:06:48 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen;
	size_t slen;

	dlen = 0;
	slen = 0;
	while (size != 0 && *(dst + dlen))
	{
		dlen++;
		size--;
	}
	if (size == 0)
		return (dlen + ft_strlen(src));
	while (*src)
	{
		if (size != 1)
		{
			*(dst + dlen) = *src;
			dst++;
			size--;
		}
		src++;
		slen++;
	}
	*(dst + dlen) = '\0';
	return (dlen + slen);
}
