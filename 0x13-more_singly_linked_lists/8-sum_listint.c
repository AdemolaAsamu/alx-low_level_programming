#include "lists.h"
/**
 * sum_listint - retuns the sum of all data of a list
 * @head: pointer to the top node of list
 * Return: sum of all data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
