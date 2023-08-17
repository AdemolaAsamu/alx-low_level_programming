#include "lists.h"
/**
 * sum_dlistint - function sums all the data (n)
 * @head: pointer to the head of linked list
 * Return: returns 0 if empty, else return sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *exist;

	sum = 0;

	for (exist = head; exist != NULL; exist = exist->next)
		sum += exist->n;

	return (sum);
}
