#include "lists.h"
/**
 * print_list - this function that prints all the elements
 * of a list_t list
 * @h: the pointer to the head node of the list
 * Return: Total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t total;

	total = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		total++;
	}
	return (total);
}
