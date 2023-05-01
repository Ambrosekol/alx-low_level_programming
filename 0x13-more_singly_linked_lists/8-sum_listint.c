#include "lists.h"
/**
 * sum_listint - sum of n in list
 * @head: head of list
 * Return: total sum of n in lists
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	sum = 0;
	tmo = head;
	if (tmp == NULL)
		return (sum);
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
