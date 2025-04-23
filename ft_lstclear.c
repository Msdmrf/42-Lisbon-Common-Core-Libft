/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:19:10 by migusant          #+#    #+#             */
/*   Updated: 2025/04/23 11:18:36 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_node;
	}
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

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list = NULL;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew(strdup("First Node"));
	node2 = ft_lstnew(strdup("Second Node"));
	node3 = ft_lstnew(strdup("Third Node"));

	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	printf("\n");
	printf("List before clearing:\n");
	print_list(list);
	printf("\n");

	ft_lstclear(&list, del_content);

	printf("List after clearing:\n");
	print_list(list);
	printf("\n");

	return (0);
} */
