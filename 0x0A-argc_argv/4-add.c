#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - add numbers on the command line
 * @argc: argument count
 * @argv: pointer
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
