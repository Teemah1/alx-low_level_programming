#include "main.h"
/**
 * print_line - prints(-)
 * @n: integer
 * Return: 0
 */
void print_line(int n)
{
	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
