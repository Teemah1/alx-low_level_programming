#include "main.h"
/**
 * _strspn - calculates in byte the total num of bytes in accept found in s
 * @s: string to be searched
 * @accept: string to match
 * Return: s in int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
