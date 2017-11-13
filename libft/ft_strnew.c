/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 21:26:50 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 09:17:40 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*str;

	str = (void *)malloc(sizeof(*str) * size + 1);
	if (str == 0)
		return ((char *)NULL);
	ft_bzero(str, size + 1);
	if (!str)
		return ((char *)NULL);
	return ((char *)str);
}
