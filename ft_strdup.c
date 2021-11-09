/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:56:45 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/08 22:40:43 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*s2;
	size_t		i;

	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	i = 0;
	if (s2 == NULL || s1 == (void *)0)
		return (NULL);
	while (s1 != (void *)0 && i < ft_strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
