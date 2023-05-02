#include "lists.h"
/**
  * reverse_listint -  reverses a list
  * @head: head of list
  * Return: returns pointer to head node
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	next = NULL;
	prev = NULL;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (prev);
}
