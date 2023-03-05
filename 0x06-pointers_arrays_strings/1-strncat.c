#include "main.h"
/**
 * _strncat - concatenates n bytes of string
 * @dest: pointer
 * @src: pointer
 * @n: number of strings
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
