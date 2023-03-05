#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: a pointer
 * @src: a pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
