#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node
 * @head: double pointer to head of node
 * @n: data to write to new element
 * Return: returns a new list with new node element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *exist;

	exist = *head;
	new_element = malloc(sizeof(dlistint_t));
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = exist;
	new_element->prev = NULL;
	if (exist != NULL)
		exist->prev = new_element;
	*head = new_element;
	return (new_element);
}
