/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:10:55 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/08 08:44:17 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
char	f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}
#include <stdio.h>
int	main(void)
{
	char str[] = "hello world";
	printf("Qbl ft_striteri: %s\n", str);

	// n3mil call l'ft_striteri o n3tiwha function f li katsift l'index o char

	// b3d ma darna l'7aja l3la string
	printf("B3d ft_striteri: %s\n",ft_strmapi(str, f) );

	return 0;
}
