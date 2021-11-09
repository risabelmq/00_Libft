/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:05:59 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/04 00:10:33 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(dst);
	j = 0;
	if (maxlen <= i)
	{
		return (ft_strlen(src) + maxlen);
	}
	while ((i + j + 1 < maxlen) && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
