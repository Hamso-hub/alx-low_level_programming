#include "main.h"

/**
 * main - prints alphabets
 * Return: set to zero
 * print_alphabet - prints alphabets
 */

void print_alphabets(void)
{
	char xar;

	for (xar = 'a'; xar <= 'z'; xar++)
	{
		_putchar(xar);
	}

	_putchar('\n');
}
