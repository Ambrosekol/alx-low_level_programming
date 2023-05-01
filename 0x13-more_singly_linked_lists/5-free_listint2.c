#include "lists.h"
/**
 * free_listint2 - frees lists
 * @head: head of list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	};
}
