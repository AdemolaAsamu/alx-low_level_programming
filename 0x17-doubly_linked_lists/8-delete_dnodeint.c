#include "lists.h"
/**
 * delete_dnoteint_at_index - function deletes node at a given index
 * @head: double pointer to head of list
 * @index: index of the node that is to be deleted
 * Return: 1 Success, -1 Fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *exist, *buffer;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	exist = *head;
	if (index == 0)
	{
		*head = exist->next;
		if (exist->next != NULL)
			exist->next->prev = NULL;
		free(exist);
		return (1);
	}
	while (exist != NULL && counter < index)
	{
		exist = exist->next;
		counter++;
	}

	if (exist == NULL)
		return (-1);
	buffer = exist;
	if (buffer->prev != NULL)
		buffer->prev->next = temp->next;
	if (buffer->next != NULL)
		buffer->->prev = buffer->prev;
	free(buffer);
	return (1);
}
