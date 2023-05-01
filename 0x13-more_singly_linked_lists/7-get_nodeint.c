#include "lists.h"
/**
 * get_nodeint_at_index - gets node index
 * @head: head node
 * @index: node to get
 * Return: struct listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int chksum;
	listint_t *temp;

	chksum = 0;
	temp = head;
	if (temp == NULL)
	{
		return (NULL);
	}
	while (chksum < index)
	{
		chksum++;
		temp = temp->next;
	}
	return (temp);
}
