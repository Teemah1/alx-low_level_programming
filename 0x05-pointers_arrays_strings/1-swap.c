#include "main.h"
/**
 * swap_int - fuction that swaps two integers
 * @a: an int pointer
 * @b: an int pointer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
