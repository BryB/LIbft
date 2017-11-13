/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrady <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 04:34:31 by bbrady            #+#    #+#             */
/*   Updated: 2017/03/22 04:35:57 by bbrady           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *hold;
	t_list *fresh;

	if (!lst)
		return (NULL);
	hold = f(lst);
	fresh = hold;
	while (lst->next)
	{
		lst = lst->next;
		hold->next = f(lst);
		hold = hold->next;
	}
	return (fresh);
}
