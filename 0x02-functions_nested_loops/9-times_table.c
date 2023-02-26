#include "main.h"
/**
 * times_table - multiplication table 9
 * Return: 0
 */
void times_table(void)
{
	/*num3-result*/
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 < 10; num2++)
		{
			_putchar(',');
			_putchar(' ');

			num3 = num1 * num2;

			if (num3 < 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((num3 / 10) + '0');
				_putchar((num3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
