#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	/*letter*/
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		if ((lt != 'e') && (lt != 'q'))
		{
		putchar(lt);
		}
	}
	putchar('\n');
	return (0);
}
