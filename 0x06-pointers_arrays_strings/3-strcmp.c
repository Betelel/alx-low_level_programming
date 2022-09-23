#include "main.h"

/**
 * _strcmp -  appends the src string to the dest string,
 *              overwriting the terminating null
 * @s1: pointor
 * @s2: the source string
 *
 * Return: a pointer to the resulting string dest.
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
