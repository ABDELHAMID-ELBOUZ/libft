/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:06:49 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/08 08:27:41 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
#include <stdio.h>
void	print_content(void *content)
{
	printf("%s\n",(char *)content);
}
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
	ft_lstiter(node1,print_content);
}