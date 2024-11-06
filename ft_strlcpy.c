/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:56:39 by aelbouz           #+#    #+#             */
/*   Updated: 2024/10/29 18:40:27 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lens;

	lens = ft_strlen(src);
	if (n == 0)
		return (lens);
	i = 0;
	while (src[i] && i + 1 < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lens);
}
