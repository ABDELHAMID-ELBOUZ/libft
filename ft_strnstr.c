/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:56:34 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/07 13:48:21 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0;
	while (haystack[j] && j < len)
	{
		i = 0;
		while ((i + j) < len && needle[i] && haystack[j + i]
			&& haystack[j + i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)&haystack[j]);
		j++;
	}
	return (NULL);
}