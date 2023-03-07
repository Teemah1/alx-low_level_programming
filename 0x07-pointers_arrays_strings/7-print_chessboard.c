#include "main.h"
/**
 * print_chessboard - function that prints a chessboard
 * @a: pointer
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int index, index1;

	for (index = 0; a[index][7]; index++)
	{
		for (index1 = 0; index1 < 8; index1++)
			_putchar(a[index][index1]);
		_putchar('\n');
	}
}
