/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:17:17 by migusant          #+#    #+#             */
/*   Updated: 2025/04/21 15:33:14 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp_node;

	if (!lst)
		return (0);
	count = 0;
	temp_node = lst;
	while (temp_node)
	{
		temp_node = temp_node->next;
		count++;
	}
	return (count);
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
	printf("Size of the list before adding any nodes: %d\n", ft_lstsize(list));
	printf("\n");

	new_node = ft_lstnew(content1);
	ft_lstadd_front(&list, new_node);

	printf("Size of the list after first node added: %d\n", ft_lstsize(list));
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content2);
	ft_lstadd_front(&list, new_node);

	printf("Size of the list after second node added: %d\n", ft_lstsize(list));
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content3);
	ft_lstadd_front(&list, new_node);

	printf("Size of the list after third node added: %d\n", ft_lstsize(list));
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
