#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: head of list
 * Returns: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
