#include "main.h"
/**
 *_islower - checks if a letter is a lower case character
 *@c: integer
 * Return: 1(true), 0(false)
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
