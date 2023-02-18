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
	double d;
	float f;
	long int li;
	long long int lli;
	short int si;
	unsigned char uc;
	signed char sc;
	unsigned int ui;

	printf("The size of an int is: %zu byte(s)\n", sizeof(i));
	printf("The size of a char is: %zu byte(s)\n", sizeof(c));
	printf("The size of a double is: %zu byte(s)\n", sizeof(d));
	printf("The size of a float is: %zu byte(s)\n", sizeof(f));
	printf("The size of a long int is: %zu byte(s)\n", sizeof(li));
	printf("The size of a long long int is: %zu byte(s)\n", sizeof(lli));
	printf("The size of a short int is:%zu byte(s)\n", sizeof(si));
	printf("The size of an unsigned char is: %zu byte(s)\n", sizeof(uc));
	printf("The size of a signed char is: %zu byte(s)\n", sizeof(sc));
	printf("The size of an unsigned int is: %zu byte(s)\n", sizeof(ui));
	return (0);

}
