/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:29:38 by migusant          #+#    #+#             */
/*   Updated: 2025/04/23 11:18:55 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
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

	char *content = "Hello, World!";
	
	printf("\n");
	printf("List before creating any node:\n");
	print_list(list);
	printf("\n");

	new_node = ft_lstnew(content);

	printf("List after creating the new node:\n");
	print_list(new_node);
	printf("\n");

	free(new_node);

	return (0);
} */
