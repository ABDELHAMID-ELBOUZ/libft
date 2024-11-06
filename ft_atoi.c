/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:34:27 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/05 11:23:40 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*skip_whitespace(const char *str, int *sign)
{
	while (*str == ' ' || *str == '\n'
		|| *str == '\t' || *str == '\r'
		|| *str == '\v' || *str == '\f')
	{
		str++;
	}
	*sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			*sign = -1;
		}
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	long	max;
	long	result;
	int		sign;

	sign = 1;
	str = skip_whitespace(str, &sign);
	result = 0;
	max = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result < max)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		max = result;
		str++;
	}
	return ((int)result * sign);
}
