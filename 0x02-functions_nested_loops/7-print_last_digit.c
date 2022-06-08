#include "main.h"

/**
 * print_last_digit - its the main func
 * @g: to be evaluated
 * Return: set fot last digit
 */
int print_last_digit(int g)
{
	int a;

	if (g < 0)
		g = -g;
	a = g % 10;

	if (a < 0)
		a = -a;
	-putchar(a + '0');
	return (a);
}
