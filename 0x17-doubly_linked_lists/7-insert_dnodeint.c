#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to head of list node
 * @idx: serial index to insert
 * @n: value to be inserted
 * Return: dlistint_t node address or NULL for fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *l, *g;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	current = *h;
	if (idx == 0)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = current;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (counter == idx)
		{
			l = current->prev;
			g = add_dnodeint(&current, n);
			l->next = g;
			g->prev = l;
			return (g);
		}
		counter += 1;
		current = current->next;
	}
	return (NULL);
}
