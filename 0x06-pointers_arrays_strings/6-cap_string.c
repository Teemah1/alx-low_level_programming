#include "main.h"
/**
*cap_string - capitalite the first word in a string
*@str: pointer
*Return: char
*/
char *cap_string(char *str)
{
	const char sep[] = " \t\n,;.!?\"(){}";
	char *p = str;
	int capitalize_next = 1;

	while (*p != '\0')
	{
		int is_sep = 0;
		int i = 0;

		while (sep[i] != '\0')
		{
			if (*p == sep[i])
			{
				is_sep = 1;
				break;
			}
			i++;
		}
		if (is_sep)
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			if (*p >= 'a' && *p <= 'z')
			{
				*p = *p - 'a' + 'A';
			}
			capitalize_next = 0;
		}
		p++;
	}
	return (str);
}
