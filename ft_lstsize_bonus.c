/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:26:10 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/08 08:32:46 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
#include <stdio.h>
int main()
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("element 1");
	t_list *node2 = ft_lstnew("element 2");
	t_list *node3 = ft_lstnew("element 3");
	t_list *node4 = ft_lstnew("element 4");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	int size = ft_lstsize(node1);
	printf("%d\n",size);
	ft_lstclear(&node1,free);
	printf("%d\n",size);

}