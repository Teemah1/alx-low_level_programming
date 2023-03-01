#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	len = len - 1;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
