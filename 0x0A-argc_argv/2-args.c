#include <stdio.h>
/**
 * main - prints all arguments received on the command line
 * @argc: total number of arguments
 * @argv: argument strings
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
