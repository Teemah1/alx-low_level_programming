#include "main.h"
/**
 *  _sqrt_recursion - calculates the square root of a number recursively
 * _square - calculates the square of a number
 * @n: number to be square
 * @num: parameter:wq
 * @n: parameters
 * Return: result
 */
int _square(int n, int num)
{
	int new_num = (num + n / num) / 2;

	if (new_num == num)
	{
		return (num);
	}
	return (_square(n, new_num));
}
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_square(n, n / 2));
}
