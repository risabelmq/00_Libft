/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:06:12 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/12 18:29:26 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ls;

	ls = lst;
	if (!ls)
		return (NULL);
	while (ls != NULL)
	{
		if (ls->next == NULL)
			return (ls);
		ls = ls->next;
	}
	return (NULL);
}
