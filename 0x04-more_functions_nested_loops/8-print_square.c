#include "main.h"
/**
 * print_square - prints #
 * @size: integer n number
 * Return: 0
 */
void print_square(int size)
{
	int num;

	if (size == 0 && size < 0)
		_putchar('\n');

	for (num = 0; num < size; num++)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
