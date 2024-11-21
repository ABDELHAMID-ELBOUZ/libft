/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:31:24 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/09 11:08:49 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s22;
	size_t				i;

	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s11[i] != s22[i])
			return (s11[i] - s22[i]);
		i++;
	}
	return (0);
}
