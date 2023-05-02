#include "lists.h"
/**
 * pop_listint - removes the top node of a list
 * @head: pointer to pointer to heed
 * Return: the value at top node, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *holder;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	holder = *head;
	*head = (*head)->next;
	n = holder->n;
	free(holder);
	return (n);
}
