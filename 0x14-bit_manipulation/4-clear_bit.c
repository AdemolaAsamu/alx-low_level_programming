#include "main.h"
/**
 * clear_bit - function main entry to clear bit to 0
 * @n:input pointer to number
 * @index: index to make change
 * Return: 1 success -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, checkr;

	checkr = sizeof(unsigned long int) * 8;
	if (n == NULL || index >= checkr)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
