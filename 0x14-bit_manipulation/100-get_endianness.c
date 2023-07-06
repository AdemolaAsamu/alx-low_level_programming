#include "main.h"
/**
 * get_endianness - main function entry that
 * checks endianness
 * Return: 0 for nill and 1 for valid
 */
int get_endianness(void)
{
	int x;
	char *c;

	x = 1;
	c = (char *) &x;

	if (*c == 1)
		return (1);
	else
		return (0);
}
