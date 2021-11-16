/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:15:36 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/16 18:28:27 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nelem;
	t_list	*first_elem;

	first_elem = NULL;
	while (lst)
	{
		nelem = ft_lstnew(f(lst->content));
		if (!nelem)
		{
			ft_lstclear(&first_elem, del);
			return (0);
		}
		ft_lstadd_back(&first_elem, nelem);
		lst = lst->next;
	}
	return (first_elem);
}
