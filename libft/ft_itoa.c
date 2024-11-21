/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:12:46 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/08 09:26:35 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long n)
{
	long	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	fill_number(char *str, long nb, int i)
{
	if (nb == 0)
	{
		str[0] = '0';
		return ;
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	long	nb;
	char	*str;

	i = count_digit(n);
	nb = n;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	fill_number(str, n, i - 1);
	return (str);
}
