/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 08:39:24 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/05 09:32:08 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char )c == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		if (s[i] == (char )c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == (char )c)
		return ((char *)&s[0]);
	return (NULL);
}
