#include "lists.h"
/**
  * dlistint_len - prints number of elements
  * @h: list head pointer
  * Return: size_t len of list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
