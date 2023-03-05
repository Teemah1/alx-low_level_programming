#include "main.h"
/**
 *_strncpy - copies n bytes of strings to dest
 *@dest: a pointer
 *@src: a pointer
 *@n: n bytes of strings
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
