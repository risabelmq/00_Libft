/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ripereir <ripereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:59:17 by ripereir          #+#    #+#             */
/*   Updated: 2021/11/08 16:20:23 by ripereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_str;

	if (!s2 || !s1)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1)+ft_strlen(s2)+1));
	if (!new_str)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		new_str[i] = s1[i];
	j = -1;
	while (s2[++j] != '\0')
		new_str[i + j] = s2[j];
	new_str[i + j] = '\0';
	return (new_str);
}
