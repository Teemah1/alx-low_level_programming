#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return ('\0');
	}
	return ('\0');
}
