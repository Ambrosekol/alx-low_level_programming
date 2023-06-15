#include "lists.h"
/**
  * get_dnodeint_at_index - get item at index
  * @head: head of index
  * @index: indec to take
  * Return: node at index
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pointer;
	int chk = 0;

	pointer = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (chk != index)
	{
		pointer = pointer->next;
		chk += 1;
	}
	return (pointer);
}
