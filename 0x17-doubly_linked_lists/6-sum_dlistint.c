#include "lists.h"
/**
  * sum_dlistint - returns the sum of lits
  * @head: head of lists
  * Return: returns the sum of values
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
