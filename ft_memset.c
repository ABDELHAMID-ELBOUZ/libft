/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:55:12 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/07 16:30:46 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}
int main ()
{
	int x = 0;
	int *ptr = &x;
	ft_memset((char *)ptr, -64, 1);
	ft_memset((char *)ptr + 1, 29, 1);
	ft_memset((char *)ptr + 2, 254, 1);
	ft_memset((char *)ptr + 3, 255, 1);
	printf("%d\n", x);
}