#include "main.h"
/**
 * _strpbrk - searches first occurence of string accept in s
 * @s: string to be scanned
 * @accept: string to be found
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int pos = 0;
	int flg = 0;

	while (*(s + i))
		i++;
	pos = i;
	i = 0;
	while (*(accept + i))
	{
		j = 0;
		while (*(s + j))
		{
			if (accept[i] == s[j])
			{
				if (j <= pos)
				{
					pos = j;
					flg = 1;
				}
			}
			j++;
		}
		i++;
	}
	if (flg == 1)
		return (&s[pos]);
	return ('\0');
}
