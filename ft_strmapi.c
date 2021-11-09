/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 00:05:30 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/08 22:07:24 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	k;
	char			*strf;

	k = 0;
	if (!s || !f)
		return (NULL);
	strf = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (strf == NULL)
		return (NULL);
	while (s[k] != '\0')
	{
		strf[k] = f(k, s[k]);
		k++;
	}
	strf[k] = '\0';
	return (strf);
}
