/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:29:08 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/11 21:34:02 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*nfirst;

	if (lst == NULL || new == NULL)
		return ;
	nfirst = *lst;
	*lst = new;
	new->next = nfirst;
}
