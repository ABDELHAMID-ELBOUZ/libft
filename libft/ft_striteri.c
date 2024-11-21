/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:28:09 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/11 15:00:16 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
=======
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
>>>>>>> 3758e9e3bbb2a08fdd38ee5f5b7a626af320fdfb
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
