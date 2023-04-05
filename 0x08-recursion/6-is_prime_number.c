#include "main.h"
/**
 * is_prime_helper - prime finder
 *
 * @n: input number
 * @i: index 
 *
 * Return: 0
 */
int is_prime_helper(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if ((i * i) > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
/**
 * is_prime_number - fxn identifies prime number
 *
 * @n: input test number
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
