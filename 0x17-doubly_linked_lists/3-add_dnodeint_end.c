#include "lists.h"
/**
  * add_dnodeint_end - add a node at end
  * @head: head node
  * @n: data to write
  * Return: returns a pointer
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *currentNode, *newNode;

	newNode = malloc(sizeof(dlistint_t));
	currentNode = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	newNode->prev = currentNode;
	return (newNode);
}
