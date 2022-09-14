#include "main.h"

/**
 * print_last_digit - Pprints the last digit of the digit
 * @n: the number
 *
 * Return: he value of ithe last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar('0' + -ld);
		return (-ld);
	}
	else
	{
		_putchar('0' + ld);
		return (ld);
	}
}
