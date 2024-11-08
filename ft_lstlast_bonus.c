/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:36:34 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/07 15:12:51 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
#include <stdio.h>
int main()
{
	t_list *node1 = ft_lstnew("element 1");
	t_list *node2 = ft_lstnew("element 2");
	t_list *node3 = ft_lstnew("element 3");
	t_list *node4 = ft_lstnew("element 4");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	t_list *last = ft_lstlast(node1);
	if (last)
		printf("%s\n",(char *)last->content);
	else
		printf("list is empty\n");
	
}