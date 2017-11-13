/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 08:10:05 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 09:18:37 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t *mem;

	mem = (size_t *)malloc(sizeof(*mem) * size + 1);
	if (mem == 0)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
