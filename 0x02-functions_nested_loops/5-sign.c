#include "main.h"

/**
 * print_sign - checks a numbers sign
 * @n: the number to be checked
 * Return: set to 1 for +, 0 for 0 and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (-1);


}
