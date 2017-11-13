/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bb_arrsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:12:27 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/17 09:28:11 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    **bb_arrsize(char const *str, char c)
{
    int		i;
    int		cntr;
    char	**arr;

    i = 0;
    cntr = 0;
    while (str[i])
    {
        if (str[i] != c)
        {
            cntr++;
            while (str[i] != c && str[i + 1] != '\0')
                i++;
        }
        i++;
    }
    arr = (char **)malloc((sizeof(*arr) * cntr) + 1);
    if (!arr)
        return (NULL);
    arr[cntr] = NULL;
    return (arr);
}
