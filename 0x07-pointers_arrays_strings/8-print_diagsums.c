#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Is the entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int s, j, k;

	s = 0;
	j = 0;

	for (k = 0; k < size; k++)
	{
		s = s + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		j += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", s, j);
}
