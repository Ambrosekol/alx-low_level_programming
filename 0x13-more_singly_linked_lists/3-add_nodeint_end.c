#include "lists.h"
/**
 * add_nodeint_end - add a node at tge end og linked list
 * @head: head node
 * @n: value to add
 * Return: returns pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	tmp = *head;
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
	return (node);
}
