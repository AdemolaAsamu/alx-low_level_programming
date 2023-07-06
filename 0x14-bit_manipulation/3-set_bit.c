#include "main.h"
/**
 * set_bit - fxn that sets the value of a bit to 1 at an index
 * @n: input pointer to the unsigned long integer
 * @index: the index that is to be modified
 * Return: 1 for success and -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int checkr;

	checkr = sizeof(unsigned long int) * 8;
	
	if (!n || index >= checkr)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
