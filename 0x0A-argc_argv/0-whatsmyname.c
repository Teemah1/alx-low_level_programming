#include <stdio.h>
/**
 * main - entry point
 * @argc: total number of argument passed to the command line
 * @argv: array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
