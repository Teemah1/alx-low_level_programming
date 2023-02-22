#include "main.h"
/**
 * _isalpha -  checks if char is upper case
 * @c: integer
 * Return: 1(success), 0(fail)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
