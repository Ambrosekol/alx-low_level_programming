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
	dlistint_t *currentNode, *nd, *secnd;
	unsigned int myIdx = 0;

	currentNode = *h;
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
