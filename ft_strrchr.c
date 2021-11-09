/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:50:21 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/05 15:25:37 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	i = ft_strlen(str);
	s = (char *)str;
	while (s[i] != c)
	{
		if (i == 0)
		{
			return (NULL);
		}
		i--;
	}
	return (s + i);
}
