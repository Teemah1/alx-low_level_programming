#include "main.h"
/**
 *_isupper - checks if the char is an upper case letter
 *@c: an integer
 *Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
