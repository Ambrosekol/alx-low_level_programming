#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	free(head);
}
