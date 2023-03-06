#include "main.h"
/**
 *_memset - fills n bytes of memory area @s  with a constant byte of @b
 *@s: memory to be filled
 *@b: bytes to be used for filling
 *@n: number of bytes to be filled
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
