#include "lists.h"
/**
 * listint_len - gives the lenght of members in
 * a listint_t list
 * @h: pointer to head of list
 * Return: lenght of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	for (; h != NULL; h = h->next)
	{
		len++;
	}
	return (len);
}
