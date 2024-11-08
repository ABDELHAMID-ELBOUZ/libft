/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:57:38 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/07 09:10:19 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*si;
	unsigned char	cu;
	size_t			i;

	si = (unsigned char *)s;
	cu = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (si[i] == cu)
			return (&si[i]);
		i++;
	}
	return (NULL);
}