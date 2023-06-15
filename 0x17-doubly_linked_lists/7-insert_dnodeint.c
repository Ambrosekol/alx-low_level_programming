#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts at index
  * @h: head node
  * @idx: index to insert
  * @n: Value to insert
  * Return: a dlistint_t node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *currentNode, *nd, *secnd, *newNode;
	unsigned int myIdx = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	currentNode = *h;
	if (idx == 0)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = currentNode;
		*h = newNode;
		return (newNode);
	}
	while (currentNode != NULL)
	{
		if (myIdx == idx)
		{
			secnd = currentNode->prev;
			nd = add_dnodeint(&currentNode, n);
			secnd->next = nd;
			nd->prev = secnd;
			return (nd);
		}
		myIdx += 1;
		currentNode = currentNode->next;
	}
	return (NULL);
}
