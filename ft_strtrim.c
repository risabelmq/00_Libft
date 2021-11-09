/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:32:32 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:36 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	len;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	start = 0;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]) != NULL)
	{
		if (start++ > len)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[len]) != NULL)
	{
		if (len-- <= start)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, start, len + 1 - start));
}

/*
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	len;

	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != (void *)0)
	{
		if (i > len)
			s1++;
		return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[len]) != (void *)0)
	{
		if (len <= i)
			len--;
		return (ft_strdup(""));
	}
	return (ft_substr(s1, i, len + 1 - i));
}
*/
