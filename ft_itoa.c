/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:26:19 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/04 00:19:15 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*itoa;

	itoa = (char *)malloc(sizeof(char ) * 2);
	if (itoa == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		itoa[0] = '-';
		itoa[1] = '\0';
		itoa = ft_strjoin(itoa, ft_itoa(-n));
	}
	else if (n < 10 && n >= 0)
	{
		itoa[0] = n + '0';
		itoa[1] = '\0';
	}
	else
		itoa = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	return (itoa);
}
