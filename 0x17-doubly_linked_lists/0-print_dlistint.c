#include "lists.h"
/**
 * print_dlistint - Function that prints contents of list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	for (node_count = 0; h; node_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}
