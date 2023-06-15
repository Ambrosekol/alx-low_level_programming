#include "lists.h"
/**
  * print_dlistint - print number of items in list
  * @h: head node
  * Return: Size_t (number of nodes)
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
