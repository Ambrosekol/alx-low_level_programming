#include "lists.h"
/**
  * listint_len - finds the len of a linked list
  * @h: pointer h to list
  * Return: returns len of lists in type size_t
  */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
