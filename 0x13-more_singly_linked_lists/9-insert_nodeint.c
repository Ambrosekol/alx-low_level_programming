#include "lists.h"
/**
  * insert_nodeint_at_index - insert node at index
  * @head: head node
  * @idx: index to insert
  * @n: data to write in
  * Return: Returns a pointer to the new node created || null
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current;
	unsigned int cnt;

	if (head == NULL)
		return (NULL);
	node = (listint_t *) malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	current = *head;
	for (cnt = 0; cnt < (idx - 1); cnt++)
	{
		if (current == NULL)
		{
			free(node);
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = current->next;
	current->next = node;
	return (node);
}
