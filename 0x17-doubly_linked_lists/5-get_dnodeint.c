#include "lists.h"
/**
 * get_dnodeint_at_index - get the value at an index
 * @head: pointer to the head of list
 * @index: Index to be retrieved
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iloc;

	if (head != NULL)
	{
		for (iloc = head; iloc != NULL && index > 0; index--)
			iloc = iloc->next;
		return (iloc);
	}
	else
		return (NULL);
}
