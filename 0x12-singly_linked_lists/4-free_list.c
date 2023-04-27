#include "lists.h"
/**
 * free_list -  Frees a linked list_t list
 * @head: A pinter to the first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *updated;

	while (head != NULL)
	{
		updated = head;
		head = head->next;
		free(updated->str);
		free(updated);
	}
}
