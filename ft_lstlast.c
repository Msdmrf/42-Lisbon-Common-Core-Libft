/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:42 by migusant          #+#    #+#             */
/*   Updated: 2025/04/23 11:18:41 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_node;

	if (!lst)
		return (NULL);
	temp_node = lst;
	while (temp_node->next)
		temp_node = temp_node->next;
	return (temp_node);
}

/* void	print_list(t_list *node)
{
	if (!node)
	{
		printf("List is empty\n");
		return;
	}
	while (node)
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
	t_list *last_node;

	char *content1 = "First Node";
	char *content2 = "Second Node";
	char *content3 = "Third Node";

	printf("\n");
	printf("List before adding any nodes:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content1);
	ft_lstadd_front(&list, new_node);

	printf("List after adding the first node:\n");
	print_list(list);
	last_node = ft_lstlast(list);
	if (last_node)
		printf("Last node: %s\n", (char *)last_node->content);
	printf("\n");

	new_node = ft_lstnew(content2);
	ft_lstadd_front(&list, new_node);

	printf("List after adding the second node:\n");
	print_list(list);
	last_node = ft_lstlast(list);
	if (last_node)
		printf("Last node: %s\n", (char *)last_node->content);
	printf("\n");

	new_node = ft_lstnew(content3);
	ft_lstadd_back(&list, new_node);

	printf("List after adding the third node at the end:\n");
	print_list(list);
	last_node = ft_lstlast(list);
	if (last_node)
		printf("Last node: %s\n", (char *)last_node->content);
	printf("\n");

	while (list)
	{
		t_list *tmp = list;
		list = list->next;
		free(tmp);
	}

	return (0);
} */
