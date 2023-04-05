#include "main.h"
/**
 * _print_rev_recursion - This function prints
 * string in reverse
 *
 * @s: poinnter to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
