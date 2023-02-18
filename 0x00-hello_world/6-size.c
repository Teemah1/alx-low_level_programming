#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)

{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("The size of an int is: %zu byte(s)\n", sizeof(i));
	printf("The size of a char is: %zu byte(s)\n", sizeof(c));
	printf("The size of a float is: %zu byte(s)\n", sizeof(f));
	printf("The size of a long int is: %zu byte(s)\n", sizeof(li));
	printf("The size of a long long int is: %zu byte(s)\n", sizeof(lli));
	return (0);

}
