#include "lists.h"
/**
 * add_node_end - Immutates the list from the tail
 * @head: pointer to the head of list
 * @str: string to be stored for mutation
 * Return: The address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
