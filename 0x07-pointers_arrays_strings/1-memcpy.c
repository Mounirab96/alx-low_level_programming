#include "main.h"

/**
 * _memcpy - is a function that copies to memory area.
 * @dest: memory where we store
 * @src: memory where we copie
 * *@n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int d = n;

	for (; a < d; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
