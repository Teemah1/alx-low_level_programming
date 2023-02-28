#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @c: char parameter
 * Return: strlen
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
