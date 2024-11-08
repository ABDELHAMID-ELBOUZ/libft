/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:28:09 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/08 08:43:57 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	f(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
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
#include <stdio.h>
int	main(void)
{
	char str[] = "hello world";

	printf("Qbl ft_striteri: %s\n", str);

	// n3mil call l'ft_striteri o n3tiwha function f li katsift l'index o char
	ft_striteri(str, f);

	// b3d ma darna l'7aja l3la string
	printf("B3d ft_striteri: %s\n", str);

	return 0;
}
