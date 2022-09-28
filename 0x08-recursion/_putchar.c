#include "main.h"
#include <unistd.h>

/**
 *  _putchar - write the character c
 *  @c: the character to print
 *
 *  Return: on sucess 1.
 *  On error, -1 is returned and errno is se appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
