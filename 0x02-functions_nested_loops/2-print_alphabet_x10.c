#include "main.h"
/**
 * print_alphabet_x10 - this fuction prints alphabets 10times
 * Return: has no return value
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
		_putchar('\n');
		i++;
	}
}
