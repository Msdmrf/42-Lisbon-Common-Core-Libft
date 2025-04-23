/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:19:33 by migusant          #+#    #+#             */
/*   Updated: 2025/04/23 11:18:34 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_node;

	if (!lst || !f)
		return ;
	temp_node = lst;
	while (temp_node)
	{
		f(temp_node->content);
		temp_node = temp_node->next;
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

void	uppercase_content(void *content)
{
	char *str = (char *)content;

	while (*str)
	{
		*str = (char)toupper((unsigned char)*str);
		str++;
	}
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
	printf("List before applying uppercase function:\n");
	print_list(list);
	printf("\n");

	printf("Applying uppercase function to each node's content:\n");
	ft_lstiter(list, uppercase_content);
	print_list(list);
	printf("\n");

	while (list)
	{
		t_list *tmp = list;
		list = list->next;
		free(tmp->content);
		free(tmp);
	}

	return (0);
} */
