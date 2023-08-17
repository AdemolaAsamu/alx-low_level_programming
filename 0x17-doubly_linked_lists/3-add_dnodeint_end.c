#include "lists.h"
/**
 * add_dnodeint_end - Function adds a new node at end of list
 * @head: Double pointer to head node
 * @n: Element values to be writen
 * Return: Pointer to the new node created at end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *existingNode, *newElement;

	newElement = malloc(sizeof(dlistint_t));
	existingNode = *head;
	if (newElement == NULL)
		return (NULL);
	newElement->n = n;
	newElement->next = NULL;
	if (existingNode == NULL)
	{
		newElement->prev = existingNode;
		*head = newElement;
		return (*head);
	}
	while (existingNode->next != NULL)
		existingNode = existingNode->next;
	existingNode->next = newElement;
	newElement->prev = existingNode;
	return (newElement);
}
