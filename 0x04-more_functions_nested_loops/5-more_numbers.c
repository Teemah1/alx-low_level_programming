#include "main.h"
/**
 * more_numbers - print num from 1-14 ten times
 * Return: 0
 */
void more_numbers(void)
{
	int inner, outer;

	for (outer = 0; outer <= 9; outer++)
	{
		for (inner = 0; inner <= 14; inner++)
		{
			if (inner <= 9)
			{
				_putchar(inner + '0');
			}
			if (inner > 9)
			{
				_putchar((inner / 10) + '0');
				_putchar((inner % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
