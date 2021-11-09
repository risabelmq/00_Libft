/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:26:39 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/04 19:19:30 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*str_dst;
	char	*str_src;
	size_t	i;

	str_dst = (char *)dst;
	str_src = (char *)src;
	i = 0;
	if (str_dst == (void *)0 && str_src == (void *)0 && len)
		return (NULL);
	while (i < len)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
