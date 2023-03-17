#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: The program takes the last digit of a random
 * number and prints out 
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* define the int for the last digit of the random number */
	int last_digit;

	last_digit = n % 10;

	/* We commence with the If statement to determine if the conditions are satisfied*/
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
		return (last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
		return (last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
		return (last_digit);
	}
	return (0);
}
