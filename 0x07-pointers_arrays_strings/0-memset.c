#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 * @b: starting address of memory to be filled
 * @k: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *b, char k, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		b[x] = k;
		n--;
	}
	return (b);
}
