#include "lists.h"
/**
 * print_listint - prints the memvers of a list
 * @h: pointer to the begining of list
 * Return: number of points of list
 */
size_t print_listint(const listint_t *h)
{
	size_t index = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		index++;
	}

	return (index);
}
