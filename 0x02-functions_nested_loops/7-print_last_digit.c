#include "main.h"
/**
 * print_last_digit - prints last digit of input
 * @lastDigit: integer
 * Return: value of last digit
 */
int print_last_digit(int lastDigit)
{

	int n;

	lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
