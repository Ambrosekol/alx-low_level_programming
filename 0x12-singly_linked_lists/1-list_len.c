#include "lists.h"
/**
 * list_len - returns the len of items in list
 * @h: pointer to the head
 * Return: size_t of lists counted
 */
size_t list_len(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h =! NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
