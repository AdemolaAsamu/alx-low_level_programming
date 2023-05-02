#include "lists.h"
/**
 * add_nodeint_end - function adds new node from end
 * @head: pointer to a pointer to the head
 * @n: value to be stored in created node
 * Return: address of the newly  created node, NULL for fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode, *cnode;

	if (head == NULL)
	{
		return (NULL);
	}

	nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
	{
		*head = nnode;
	}
	else
	{
		cnode = *head;
		while (cnode->next != NULL)
		{
			cnode = cnode->next;
		}
		cnode->next = nnode;
	}
	return (nnode);
}
