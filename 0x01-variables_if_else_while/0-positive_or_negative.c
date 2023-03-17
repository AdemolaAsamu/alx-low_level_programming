#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - File of printing random numbers
 * return: 0 success
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
	else if (n == 0)
	{
		printf("%d is zero\n", n);
		return (n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
		return (n);
	}
	return (0);
}
