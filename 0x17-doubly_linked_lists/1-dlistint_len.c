#include "lists.h"
/**
 * dlistint_len - Function that returns number
 * of element ina linked list
 * @h: pointer to the head of function
 * Return: value of number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elementT = 0;

	if (h == NULL)
	{
		elementT = 0;
		return (elementT);
	}
	while (h != NULL)
	{
		h = h->next;
		elementT++;
	}
	return (elementT);
}
