/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 23:53:53 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 08:59:38 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*r;
	size_t			i;

	r = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		r[i] = 0;
		i++;
	}
}