/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 03:36:26 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 04:47:53 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*pd;
	char	*ps;

	i = -1;
	pd = (char *)dst;
	ps = (char *)src;
	if (dst > src)
		while (len-- > 0)
			*(pd + len) = *(ps + len);
	else
		while (++i < (int)len)
			*(pd + i) = *(ps + i);
	return (dst);
}
