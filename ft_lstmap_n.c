/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:11 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/16 18:15:18 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*f_elem;

	if (!lst || !f || !del)
		return (NULL);
	f_elem = ft_lstnew(f(lst->content));
	if (!f_elem)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	lst = lst->next;
	elem = f_elem;
	while (lst)
	{
		if (!(f_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&elem, del);
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&f_elem, elem);
	}
	return (f_elem);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;

	if (!lst)
		return (NULL);
	if (newnode == NULL || ft_lstnew(f(lst->content)) == NULL)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	lst = lst->next;
	newlst = newnode;
	while (lst)
	{
		if (newnode == NULL || ft_lstnew(f(lst->content)) == NULL)
		{
			ft_lstclear(&newlst, del);
			ft_lstclear(&lst, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&newlst, newnode);
	}
	return (newlst);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
	{
		ft_lstclear(&lst, del);
	}
	ret = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&ret, del);
		}
		lst = lst->next;
		ft_lstadd_back(&ret, tmp);
	}
	return (ret);
}
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nelem;
	t_list	*first_elem;

	first_elem = NULL;
	while (lst)
	{
		nelem = ft_lstnelem(f(lst->content));
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
