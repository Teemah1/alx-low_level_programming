#include "main.h"
/**
 * factorial - calculates the factorial of number n
 * @n: number to get the factorial
 * Return: result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
