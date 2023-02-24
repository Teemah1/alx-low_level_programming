#include "main.h"
/**
 * print_diagonal - prints /
 * @n : integer(number entered by user or computer)
 * Return: 0
 */
void print_diagonal(int n)
{
	int num;

	if (n == 0 && n < 0)
	{
		_putchar('\n');
	}

	for (num = 0; num < n; num++)
	{
		_putchar('/');
		_putchar('\n');
	}
}
