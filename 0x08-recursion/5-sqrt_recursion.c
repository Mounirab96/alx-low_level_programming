#include "main.h"

int real_sqrt(int x, int y);

/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: number that we will calculate its square root
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (real_sqrt(n, 1));
}

/**
 * real_sqrt - Calculates natural square root
 * @m: number that we will calculate its square root
 * @b: iterate number
 * Return: the natural square root
 */
int real_sqrt(int m, int b)
{
	int v = b * b;

	if (v > m)
		return (-1);

	if (v == m)
		return (b);

	return (real_sqrt(m, b + 1));
}
