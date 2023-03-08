#include <stdio.h>
/**
 * print_diagsums - prints the sum of elements in a square matrix
 * @a: array to be added
 * @size: size of array
 * Return: 0;
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + 1);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += *(a + i * size + j);
	}
	printf("%d, %d\n", sum1, sum2);
}
