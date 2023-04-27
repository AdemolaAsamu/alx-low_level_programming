#include "lists.h"
/**
 * list_len - function that returns the len of
 * a linked list_t list
 * @h: pointer to the head note of the list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
