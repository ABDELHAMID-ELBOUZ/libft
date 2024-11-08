/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouz <aelbouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:09:21 by aelbouz           #+#    #+#             */
/*   Updated: 2024/11/07 16:15:19 by aelbouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>
int main()
{
	int n = 42;
	t_list *head = NULL;
	t_list *node = ft_lstnew("hoola am");
	ft_lstadd_front(&head,node);
	printf("%s\n",(char *)head->content);
	printf("%p\n",head->next);
}