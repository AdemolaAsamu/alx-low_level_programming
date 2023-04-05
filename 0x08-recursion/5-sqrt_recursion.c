#include "main.h"
/**
 * _sqrt_helper - this function sources
 * the sqrt
 * @n: This is the high
 * @low: lowest point tobe 0 to start
 * @high: this is equivalent to n value
 * Return: 0
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;
	int square;


	if (low > high)
	{
		return (-1);
	}

	
	mid = (low + high) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square
 * root of a number
 *
 * @n: input number that square root is calculated
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0, n));
}
