#include "main.h"
/**
 * get_bit - input function main entry for bit of index
 * @n: input number
 * @index: point to pick bit
 * Return: value of bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int checkr;

	checkr = sizeof(unsigned long int) * 8;

	if (index >= checkr)
		return (-1);
	return ((n >> index) & 1);
}
