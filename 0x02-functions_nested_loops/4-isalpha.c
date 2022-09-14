#include "main.h"

/**
 * _isalpha - checks for alphabetical letters
 * @c: a charter to be checke on
 * Return: returns 0 or 1 depending on condition
 */
int _isalpha(int c)
{
	int l;
	int u;
	int count;

	count = 0;
	for (l = 97; l <= 122; l++)
	{
		if (c == l)
		{
		count++;
		break;
		}
	}
	for (u = 65; u <= 91; u++)
	{
		if (c == u)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		return (1);
}

