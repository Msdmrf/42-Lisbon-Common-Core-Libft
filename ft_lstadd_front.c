/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:16:54 by migusant          #+#    #+#             */
/*   Updated: 2025/04/23 11:18:27 by migusant         ###   ########.fr       */
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

/* void	print_list(t_list *node)
{
	if (!node)
	{
		printf("List is empty\n");
		return;
	}
	while (node != NULL)
	{
		printf("%s", (char *)node->content);
		if (node->next)
			printf(" -> ");
		node = node->next;
	}
	printf("\n");
}

int	main(void)
{
	t_list *list = NULL;
	t_list *new_node;

	char *content1 = "First Node";
	char *content2 = "Second Node";

	printf("\n");
	printf("List before adding any nodes:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content1);
	ft_lstadd_front(&list, new_node);

	printf("List after adding first node:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content2);
	ft_lstadd_front(&list, new_node);

	printf("List after adding second node:\n");
	print_list(list);
	printf("\n");

	while (list)
	{
		t_list *tmp = list;
		list = list->next;
		free(tmp);
	}

	return (0);
} */
