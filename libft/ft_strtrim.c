/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 00:48:08 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 05:06:22 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		e;

	i = 0;
	e = 0;
	if (!s)
		return (NULL);
	e = ft_strlen((char *)s) - 1;
	while (s[e] == ' ' || s[e] == '\t' || s[e] == '\n' || s[e] == '\0')
		e--;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (e <= 0)
		return (ft_strdup(""));
	str = ft_strnew((size_t)e - i);
	if (!str)
		return (NULL);
	str = ft_strsub(s, i, (e + 1 - i));
	return (str);
}
