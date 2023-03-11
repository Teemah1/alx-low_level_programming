#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments passed into command line
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc == 1)
		printf("0\n");
	else
		printf("%d\n", argc - 1);
	return (0);
}
