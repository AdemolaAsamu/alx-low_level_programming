#include "lists.h"
/**
 * free_dlistint - function that frees the lists
 * @head: pointer to head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buffer, *nextNode;

	for (buffer = head; buffer != NULL; )
	{
		nextNode = buffer->next;
		free(buffer);
		buffer = nextNode;
	}
}
