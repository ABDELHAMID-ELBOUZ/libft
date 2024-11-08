/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:45:02 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/08 08:16:12 by aelbouz          ###   ########.fr       */
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
#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main()
{
    void *ptr;
    
    // Test 1: Normal case
    printf("Test 1 - Normal allocation:\n");
    ptr = ft_calloc(5, 4);
    if (ptr)
    {
        printf("Success: Allocated 5 * 4 bytes\n");
        free(ptr);
    }
    
    // Test 2: Test overflow (hada li hna baghin)
    printf("\nTest 2 - Overflow test:\n");
    ptr = ft_calloc(SIZE_MAX, 2);  // Had multiplication ghadi dir overflow
    if (ptr == NULL)
        printf("Success: Overflow detected and handled\n");
    else
    {
        printf("Error: Overflow not detected\n");
        free(ptr);
    }
    
    // Test 3: Zero allocation
    printf("\nTest 3 - Zero allocation:\n");
    ptr = ft_calloc(0, 5);
    if (ptr)
    {
        printf("Success: Zero allocation handled\n ");
        free(ptr);
    }

    return 0;
}