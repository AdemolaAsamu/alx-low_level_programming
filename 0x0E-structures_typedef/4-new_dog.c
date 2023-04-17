#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * my_strlen - main function for fnding lenght of string
 * @str: input string
 * Return: lenght of string
 */
int my_strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * my_strcpy - main entry copy function
 * @dest: input dest loc
 * @src: strind input copy
 * Return: dest
 */
char *my_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
/**
 * new_dog - main entry function
 *
 * @name: name of dog
 * @age: input age
 * @owner: owner of dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	char *new_name = malloc(my_strlen(name) + 1);
	char *new_owner = malloc(my_strlen(owner) + 1);

	if (new_dog == NULL)
		return (NULL);
	if (new_name == NULL)
	{
		/* failed to allocate memory for name free mem and return null*/
		free(new_dog);
		return (NULL);
	}
	if (new_owner == NULL)
	{
		/* Failed to allocate memory for owner, free memory and return NULL*/
		free(new_name);
		free(new_dog);
		return (NULL);
	}
/* Copy name and owner to the new memory*/
	my_strcpy(new_name, name);
	my_strcpy(new_owner, owner);

	/* Initialize the new dog with the existing variables*/
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
