#include "main.h"

/**
 * print_alphabet - prints all alphabets an a new line is added
 * Return: set to zero
 * print_alphabet - prints alphabets
 */

void print_alphabet(void)
{
	char xar;

	xar = 'a';
	while (xar <= 'z')
	{
		_putchar(xar);
		xar++;

	}

	_putchar('\n');
}
