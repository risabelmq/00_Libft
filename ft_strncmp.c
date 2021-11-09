/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 23:18:21 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/05 18:56:43 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	aux;
	unsigned char	str1;
	unsigned char	str2;
	
	aux = 0;
	i = 0;
	if (s2[i] == '\0')
		return (aux);aux = s1[i] - s2[i];
	while (s1[i] != '\0' && s2[i] != '\0' && !aux && i < n)
	{
		aux = s1[i] - s2[i];
		i++;
	}
	if (i < n && !aux && (s1[i] == '\0' || s2[i] == '\0'))
		aux = s1[i] - s2[i];
	return (aux);
}
*/