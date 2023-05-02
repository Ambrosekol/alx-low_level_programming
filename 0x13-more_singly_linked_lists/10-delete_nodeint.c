#include "lists.h"
/**
  * delete_nodeint_at_index - delete node at index
  * @head: head of node
  * @index: index to delete
  * Return: returns 1 if successful or -1 if not
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *holder, *temp, *mem;
	int cnt;

	if (head == NULL || *head == NULL)
		return (-1);
	cnt = 0;
	holder = *head;
	if (index == 0)
	{
		holder = head->next;
		free(head);
		head = holder;
		return (1);
	}
	while (holder != NULL)
	{
		if (cnt == (index - 1))
		{
			temp = holder->next;
			free(holder);
			mem->next = temp;
			return (1);
		}
		mem = holder;
		holder = holder->next;
		cnt++;
	}
}
