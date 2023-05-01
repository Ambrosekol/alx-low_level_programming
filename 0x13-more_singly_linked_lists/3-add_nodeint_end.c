#include "lists.h"
/**
 * add_nodeint_end - add a node at tge end og linked list
 * @head: head node
 * @n: value to add
 * Return: returns pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int tot_list, i;
	listint_t *node;
	listint_t *tmp;

	tot_list = 0;
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	while (*head != NULL)
	{
		tot_list++;
		*head = *head->next;
	}
	if (*head == NULL)
	{
		node->n = n;
		node->next = *head;
		head* = node;
		tot_list++;
	}
	else
	{
		for (i = 0; i < tot_list; i++)
		{
			if (*head->next == NULL)
			{
				tmp = *head->next;
				node->n = n;
				node->next = tmp;
				*head->next = node;
			}
			*head = head->next;
		}
	}
	return (node);
}
