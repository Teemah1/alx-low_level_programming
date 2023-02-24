#include "main.h"
#include <unistd.h>
int _putchar(char c)
{
	c = write(1, &c, 1);
	return (c);
}
