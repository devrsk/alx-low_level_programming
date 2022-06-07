#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercases only
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int letter;

	for (letter =97; letter < 123; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
