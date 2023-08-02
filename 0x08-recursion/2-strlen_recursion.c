#include "main.h"

/**
 * _strlen_recursion - The Function that returns the length of a string.
 * @s: the string
 * Return: value of integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
