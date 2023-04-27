#include "lists.h"
/**
 * add_node_end - add a node at the end
 * @head: head of the lists
 * @str: value string
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *crrnt;
	char *strng;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	strng = strdup(str);
	if (strng == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strng;
	new_node->len = strlen(strng);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		crrnt = *head;
		while (crrnt->next != NULL)
		{
			crrnt = crrnt->next;
		}
		crrnt->next = new_node;
	}
	return (new_node);
}
