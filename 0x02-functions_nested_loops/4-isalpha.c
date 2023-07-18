#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character that checks.
 *
 *  Returns 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
