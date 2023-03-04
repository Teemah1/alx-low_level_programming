#include "main.h"
/**
 * puts_half - prints half of string if odd
 * @str: pointer
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int half_len;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		half_len = len / 2;
	}
	else
	{
		half_len = (len + 1) / 2;
	}
	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
