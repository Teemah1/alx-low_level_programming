#include "main.h"
/**
 * _abs - absolute value
 *@int: integer
 * Return: 0
 */
int _abs(int j)
{
	int n;

	if (j < 0)
	{
		n = j * (-1);
		return (n);
	}
	else
	{
		return (j);
	}
	return (0);

}
