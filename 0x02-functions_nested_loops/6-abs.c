#include "main.h"
/**
 * _abs - absolute value
 *@int: integer
 * Return: 0
 */
int _abs(int)
{
	int n;

	if (n < 0)
	{
		n = n * (-1);
		_putchar(n);
	}
	else
	{
		putchar(n);
	}
	return (0);

}
