#include "main.h"
/**
 *_memcpy - copies a block of memory from one location to another
 *@dest: destination/destination memory
 *@src: source of memory
 *@n: number of blocks or bytes to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
