#include "main.h"
/**
 * _islower - checks the lowercase character.
 * @c: the character that  checks.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
