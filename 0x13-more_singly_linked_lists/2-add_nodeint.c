#include "lists.h"
/**
 * add_nodeint - this adds a new node at start of list
 * @head: points to the header of the list
 * @n: value to be stored in new node
 * Return: the address of the new member, or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
