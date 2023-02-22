#include "main.h"
/**
 * print_last_digit - prints last digit of input
 * @n: integer
 * Return: value of last digit
 */
int print_last_digit(int n)
{

	int lastDigit;

	if (n < 0)
	{
		n = n * (-1);
		lastDigit = n % 10;
	}
	else
	{
		lastDigit = n % 10;
		putchar(lastDigit + '0');
		return (lastDigit);
	}
}
