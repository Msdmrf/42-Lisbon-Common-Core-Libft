#include "libft.h"
#include <stdio.h>

static void *function(void *s)
{
  int i;
  int sint;
  char *str = s;
  char *ptr;

  ptr = ft_calloc(ft_strlen(str) + 1, sizeof(char));

  i = 0;
  while (str[i])
  {
    ptr[i] = ft_toupper(str[i]);
    i++;
  }
  return (ptr);
}

int main()
{
  t_list *head;
  t_list *head2;
  t_list *temp_node;

  head = ft_lstnew(ft_strdup("Hello"));
  // printf("%s\n", (char *)head->content);

  t_list *n1;
  n1 = ft_lstnew(ft_strdup("World"));

  t_list *n2;
  n2 = ft_lstnew(ft_strdup("Bye"));
  // printf("%s\n", (char *)new->content);

  ft_lstadd_back(&head, n1);
  // printf("%s\n", (char *)head->next->content);

  ft_lstadd_back(&head, n2);
  // printf("%s\n", (char *)head->next->next->content);

  // ft_lstiter(head, function);

  temp_node = head;
  while(temp_node)
  {
    printf("%s\n", (char *)temp_node->content);
    temp_node = temp_node->next;
  }

  /* head->next = n1->next;
  ft_lstdelone(n1, free); */

  head2 = ft_lstmap(head, function, free);

  temp_node = head2;
  while(temp_node)
  {
    printf("%s\n", (char *)temp_node->content);
    temp_node = temp_node->next;
  }

  ft_lstclear(&head, free);
  ft_lstclear(&head2, free);
}