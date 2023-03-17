#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Description: The program generates a random number
*and prints out if it is either positive, negative or zero
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* If statements to confirm the type of entry selection*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
		return (0);
	}
	/* Else if to consider the zero value of random number*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (0);
	}
	/* else if to confirm if the value is negative*/
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (0);
	}
	return (0);
}
