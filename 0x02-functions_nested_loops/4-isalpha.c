#include "main.h"
/**
 *_isalpha - checks if char is alphabet or not
 *@c: Characters are i ASCII code
 * Return: 1 if c is a letter and 0 if otherwise
**/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
