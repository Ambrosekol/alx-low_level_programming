#include "lists.h"
/**
  * print_dlistint - print number of items in list
  * @h: head node
  * Return: Size_t (number of nodes)
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
