#include "lists.h"
/**
 * free_listint2 - funtion that frees list
 * @head: pointer to pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cnode, *nnode;

	if (*head == NULL || head == NULL)
		return;
	cnode = *head;

	while (cnode != NULL)
	{
		nnode = cnode->next;
		free(cnode);
		cnode = nnode;
	}

	*head = NULL;
}
