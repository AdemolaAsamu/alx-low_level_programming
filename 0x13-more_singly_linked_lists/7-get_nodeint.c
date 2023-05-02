#include "lists.h"
/**
 * get_nodeint_at_index - returned the nth node
 * of a linked list
 * @head: pointer to the top node
 * @index: node index
 * Return: pointer to the nth point, or NULL if empty
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *holder;
	unsigned int i;

	holder = head;
	i = 0;

	while (holder != NULL)
	{
		if (i == index)
			return (holder);
		i++;
		holder = holder->next;
	}
	return (NULL);
}
