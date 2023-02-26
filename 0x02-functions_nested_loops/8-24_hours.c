#include "main.h"
/**
 * jack_bauer - minute and hour function
 * Return: 0
 */
void jack_bauer(void)
{
	int min, hour;

	for (min = 0; min < 24; min++)
	{
		for (hour = 0; hour < 60; hour++)
		{
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar(':');
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar('\n');
		}
	}
}
