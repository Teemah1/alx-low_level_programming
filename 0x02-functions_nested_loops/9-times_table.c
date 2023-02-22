#include "main.h"
/**
 * times_table - multiplication table 9
 * Return: 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;
		int result;

		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			_putchar(result + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
