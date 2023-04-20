#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that takes in querry for struct dog
 *
 * @d: this is input name
 * @name: name of dog
 * @age: input age
 * @owner: input dog owner
 *
 * Return: void;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
