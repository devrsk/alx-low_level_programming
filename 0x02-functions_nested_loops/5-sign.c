#include "main.h"
/**
 *print_sign - prints sign of a number if less than, greater than or equal to zero
 *@n: input must be an integer
 * Return: >0, 0 or <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
