#include "main.h"

/**
 * _isupper - checks if a character is upper
 * #@c: carrier integer variable
 * Return: 1 if true, 9 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
