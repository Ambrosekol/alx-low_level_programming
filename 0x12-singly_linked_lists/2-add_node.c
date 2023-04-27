#include "lists.h"
/**
 * add_node - adds a node
 * @head: head of node
 * @str: string to populate with
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dupcate;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dupcate = strdup(str);
	if (dupcate == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = dupcate;
	new_node->len = strlen(dupcate);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
