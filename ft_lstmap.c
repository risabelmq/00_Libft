/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:58:11 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/15 19:06:23 by ripereir         ###   ########.fr       */
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
	t_list *ret;
	t_list *nxt;

	if (lst == NULL)
		return (NULL);
	if (!(nxt = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	lst = lst->next;
	ret = nxt;
	while (lst)
	{
		if (!(nxt = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&ret, del);
			ft_lstclear(&lst, del);
			break ;
		}
		ft_lstadd_back(&ret, nxt);
		lst = lst->next;
	}
	return (ret);
}
