#ifndef FUNH
#define FUNH
#include "lists.h"
/**
 * print_list - prints tge elements of a linked list
 * @h: pointer to tge head of list
 * Return: number of items counted (Size_t)
 */
size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		num++;
		h = h->next;
	}
	return (num);
}
#endif
