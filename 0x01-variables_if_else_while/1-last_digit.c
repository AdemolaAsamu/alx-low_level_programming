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
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* define int last digit of the random number */

	last_num = n % 10;

	/* We start with the If statement to determine the conditions are satisfied*/
	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_num);
		return (last_num);
	}
	else if (last_num < 6 && last_num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_num);
		return (last_num);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_num);
		return (last_num);
	}
	return (0);
}
