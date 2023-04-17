#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - main entry function that frees memory of struct
 *
 * @d: input variable
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/*free the memory allocated for name and owner*/
		free(d->name);
		free(d->owner);

		/* free the memory allocated for the dog object*/
		free(d);
	}
}
