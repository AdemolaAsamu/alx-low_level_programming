#include "main.h"
/**
 * print_last_digit - This function prints
 * the last digit of a number
 *
 * @n: This is the number being defined
 *
 * Return: last_digit
 */
int print_last_digit(int n)
{
	int l = n % 10;
	
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
