/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:35:45 by josanch2          #+#    #+#             */
/*   Updated: 2023/09/26 19:51:50 by josanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	len;
	char	*p;

	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	p = (char *)malloc(len);
	if (p == NULL)
		return (NULL);
	while (*s1)
	{
		p[i++] = *s1++;
	}
	while (*s2)
	{
		p[i++] = *s2++;
	}
	p[i] = '\0';
	return (p);
}
