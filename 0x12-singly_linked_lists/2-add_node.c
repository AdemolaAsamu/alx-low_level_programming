#include "lists.h"
/**
 * add_node - function that adds or mutates the list
 * from the top node
 * @head: pointer to the pointer to the head node
 * @str: string input for the new node
 * Return: the address of new element, or NULL for failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* Allocating memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/*Duplicate the string and set new nodes*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	/*setting head pointer to the new node*/
	*head = new_node;
	return (new_node);
}
