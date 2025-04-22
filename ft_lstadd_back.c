/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:59 by migusant          #+#    #+#             */
/*   Updated: 2025/04/21 14:27:31 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
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

	char *content1 = "First Node";
	char *content2 = "Second Node";
	char *content3 = "Third Node";

	printf("\n");
	printf("List before adding any nodes:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content1);
	ft_lstadd_back(&list, new_node);

	printf("List after adding the first node:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content2);
	ft_lstadd_back(&list, new_node);

	printf("List after adding the second node:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content3);
	ft_lstadd_back(&list, new_node);

	printf("List after adding the third node:\n");
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
