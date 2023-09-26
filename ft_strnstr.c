/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:36:54 by josanch2          #+#    #+#             */
/*   Updated: 2023/09/26 19:54:39 by josanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		n = 0;
		while (haystack[i + n] == needle[n] && (i + n) < len)
		{
			if (haystack[i + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[i]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
