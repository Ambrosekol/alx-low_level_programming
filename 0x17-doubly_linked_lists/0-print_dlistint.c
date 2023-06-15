#include "lists.h"
/**
  * print_dlistint - print number of items in list
  * @h: head node
  * Return: Size_t (number of nodes)
  */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	int count = 0;

	current = h;
	while (current != NUll)
	{
		count += 1;
		current = current->next;
	}
	return (count);
}
