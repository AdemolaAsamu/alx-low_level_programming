#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sums of the 2 diagonal
 * of a square matrix
 *
 * @a:
 * @size:
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sumdiag1;
	int sumdiag2;
	int i;

	sumdiag1, sumdiag2 = 0, 0;

	for (i = 0; i < size; i++)
	{
		sumdiag1 = sumdiag1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		sumdiag2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sumdiag1, sumdiag2);
	return (0);
}
