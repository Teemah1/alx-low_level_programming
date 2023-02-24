#include "main.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 * Return: 0
*/
void more_numbers(void)
{
	int zeroToTen, zeroToFteen;

	for (zeroToTen = 0; zeroToTen <= 9; zeroToTen++)
	{
		for (zeroToFteen = 0; zeroToFteen <= 14; zeroToFteen++)
		{
			if (zeroToFteen > 9)
			_putchar((zeroToFteen / 10) + '0');
			_putchar((zeroToFteen % 10) + '0');
		}
		_putchar('\n');
	}
}
