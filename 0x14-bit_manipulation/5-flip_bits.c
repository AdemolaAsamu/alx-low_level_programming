#include "main.h"
/**
 * flip_bits - function that gives number of bits
 * required to flip a no to another
 * @n: input number
 * @m: number to flip n
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change;
	unsigned int len;

	change = n ^ m;
	len = 0;

	while (change > 0)
	{
		len += change & 1;
		change >>= 1;
	}
	return (len);
}
