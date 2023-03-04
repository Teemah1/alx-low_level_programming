#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: a pointer(destination)
 * @src: a pointer(source)
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (original_dest);
}
