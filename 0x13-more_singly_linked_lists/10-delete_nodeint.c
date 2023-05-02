#include "lists.h"
/**
 * delete_nodeint_at_index - function main entry
 * @head: double pointer
 * @index: input index
 * Return: 1 for success -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	occur = *head;
	prev = NULL;
	i = 0;
	if (*head == NULL)
		return (-1);
	while (i < index && curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		i++
	}
	if (i != index || curr == NULL)
		return (-1);
	if (prev == NULL)
		*head = curr->next;
	else
		prev->next = curr->next;
	free(curr);
	return (1);
}
