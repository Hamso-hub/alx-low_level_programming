#include <stdio.h>

/**
 * main - prints alphabets
 * Return: set to zero
 * print_alphabet - prints alphabets
 */

void print_alphabet(void)
{
	char xar;

	for (xar = 'a'; xar <= 'z'; xar++)
	{
		putchar(xar);
	}

	putchar('\n');
print_alphabet();
}

