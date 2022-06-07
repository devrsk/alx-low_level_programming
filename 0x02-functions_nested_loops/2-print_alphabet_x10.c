#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int counter = 0;

	while (counter < 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		counter++;
		_putchar('\n');
	}
}
