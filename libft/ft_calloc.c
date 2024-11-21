/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:45:02 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/13 11:08:55 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*p;

	total = count * size;
	if (count == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	p = (void *)malloc(total);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
