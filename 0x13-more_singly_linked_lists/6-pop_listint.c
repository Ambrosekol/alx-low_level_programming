#include "lists.h"
/**
 * pop_listint - pops head node  off
 * @head: head of list
 * Return: returns head node data
 */
int pop_listint(listint_t **head)
{
	int cnt;
	listint_t tmp;

	cnt = 0;
	if (*head == NULL)
		return (cnt);
	tmp = (*head)->next;
	cnt = (*head)->n;
	free(*head);
	*head = tmp;
	return (cnt);
}
