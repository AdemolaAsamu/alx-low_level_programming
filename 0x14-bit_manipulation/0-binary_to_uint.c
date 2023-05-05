#include "main.h"
#include <math.h>
unsigned int power(unsigned int base, unsigned int exponent);
/**
 * binary_to_uint - function main entry binary
 * @b: input character
 * Return: The binary value is returned
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin;
	int len, i;

	if (b == NULL || b[0] == '\0')
		return (0);

	len = strlen(b);
	bin = 0;
	if (b == NULL)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
			bin += 0 * power(2, len - 1 - i);
		else if (b[i] == '1')
			bin += 1 * power(2, len - 1 - i);
		else
			return (0);
	}
	return (bin);
}
/**
 * power - function that calculates the power
 * @base: input base for the function
 * @exponent: the power of function
 * Return: the value of the base to exponent
 */
unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
