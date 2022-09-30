#include "main.h"

/**
 * _strncat -  appends the src string to the dest string,
 *              overwriting the terminating null
 * @dest: pointor
 * @src: the source string
 * @n: the num of bytes
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

