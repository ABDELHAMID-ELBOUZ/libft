/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:27:52 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/13 11:03:50 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	lens = ft_strlen(src);
	if (dstsize == 0)
		return (lens);
	lend = ft_strlen(dst);
	if (dstsize <= lend)
		return (dstsize + lens);
	i = 0;
	while (src[i] && i + lend + 1 < dstsize)
	{
		dst[lend + i] = src[i];
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
