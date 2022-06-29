#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string s
 * Return: returns parsed integer
 */
int _atoi(char *s)
{
	unsigned int num = 0, sign = 1, start = 0;

	while (*s)
	{
		if (start && !(*s >= '0' && *s <= '9'))
			break;
		if (*s == '-')
			sign *= -1;
		if ((*s >= '0' && *s <= '9'))
		{
			start = 1;
			num = num * 10 + (int)*s - 48;
		}
		s++;
	}
	return (sign * num);
}
