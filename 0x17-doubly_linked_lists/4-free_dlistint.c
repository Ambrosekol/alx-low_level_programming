#include "lists.h"
/**
  * free_dlistint - frees the lists
  * @head: head of list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}	
