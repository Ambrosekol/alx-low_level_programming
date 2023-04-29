#include "lists.h"
/**
  * print_listint - prints the contents of a linked list
  * @h: pointer h to list
  * Return: returns size of lists in type size_t
  */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
