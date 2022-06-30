#include "main.h"
/**
 * _isupper- checks for if character is upper case
 * @s: carrier integer variable
 * return: 0 for false, 1 for true
 */
int _isupper(int s)
{
	if (s >= 65 && s <= 90)
	{
		return (1);
	}
	return (0);
}
