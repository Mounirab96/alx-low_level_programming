#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns the pointer to a newly allocated
 *@str: contain original string
 *Return: if faild NULL if succes string
 */

char *_strdup(char *str)
{
	char *f;

	if (str == NULL)
		return (NULL);
	f = malloc(strlen(str) + 1);
	if (f == NULL)
		return (NULL);
	strcpy(f, str);
	return (f);
}
