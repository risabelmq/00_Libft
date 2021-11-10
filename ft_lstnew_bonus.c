/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:12:07 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/10 18:19:16 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elmt;

	new_elmt = (t_list *)malloc(sizeof(t_list));
	if (new_elmt == NULL)
	{
		return (NULL);
	}
	new_elmt->content = content;
	new_elmt->next = NULL;
	return (new_elmt);
}
