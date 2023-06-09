#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer to the head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cnode;

	while (head != NULL)
	{
		cnode = head;
		head = head->next;
		free(cnode);
	}
}
