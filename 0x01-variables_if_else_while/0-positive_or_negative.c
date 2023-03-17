#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main: file that print  random numbers either positive, negative or zero
* return: (0) (n)  success
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
		return (n);
	}
	/* Else if to consider the zero value of random number*/
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (n);
	}
	/* else if to confirm if the value is negative*/
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (n);
	}
	return (0);
}
