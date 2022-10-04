#include "main.h"

/**
 * _strlen - count array
 * @s: array of element
 * Return: 1;
 */

int _strlen(char *s)
{
	usigned int i;

	i = 0;
	while (s[i] != '\0') /*count char of string*/
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copy
 * @src: array element
 * @dest: dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup -array for prints string
 * @str: array elment
 * Return: pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;

if (str == 0)
{
	return (NULL);
}

size = _strlen(str) + 1;

dsr = (char *) malloc(size *sizeof(char));

if (dst == 0)
{
	return (NULL);
}
strcpy(dst, str);
return (dst);
}
