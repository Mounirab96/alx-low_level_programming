#include "main.h"

/**
 * _strchr - Is an entry point
 * @i: input
 * @f: input
 * Return: Always 0 (Success)
 */

char *_strchr(char *i, char f)
{
	int c = 0;

	for (; x[c] >= '\0'; c++)
	{
		if (i[c] == f)
			return (&i[c]);
	}
	return (0);
}
