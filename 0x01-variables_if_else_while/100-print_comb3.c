#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 9; i++)
	{
		for (k = i + 1; k < 10; k++)
		{
			putchar((i % 10) + '0');
			putchar((k % 10) + '0');

			if (i < 8 || k < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
