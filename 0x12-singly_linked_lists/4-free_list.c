#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *crnt, *nxt;

	crnt = head;
	while (crnt != NULL)
	{
		nxt = crnt->next;
		free(crnt->str);
		free(crnt);
		crnt = nxt;
	}
}
