#include "lists.h"
listint_t *addnodeint(listint_t **head, const int n);
/**
 * insert_nodeint_at_index - function that inserts value
 * into a given point in a linked list
 * @head: pointer to the head of the list
 * @idx: index of the list to place the new node
 * @n: value to be stored
 * Return: address to new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *cnode;
	unsigned int i;

	cnode = *head;
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	for (i = 0; ((i < idx - 1) && (cnode != NULL)); i++)
		cnode = cnode->next;
	if (cnode == NULL)
		return (NULL);
	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = cnode->next;
	cnode->next = nnode;
	return (nnode);
}
/**
 * add_nodeint - function main entry
 * @head: pointer to first node
 * @n: integer value input
 * Return: pointer to newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
