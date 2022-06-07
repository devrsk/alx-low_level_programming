#include "main.h"
/**
 * _islower - prints 1 or 0 depending on input
 * @c: input parameter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= "a" && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
