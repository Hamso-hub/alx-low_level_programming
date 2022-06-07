#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * Return: set to 0
 */

void print_alphabet_x10(void)
{
	char pox;

	int i;

	for (i = 0; i < 10; i++)
	{

		for (pox = 'a'; pox <= 'z'; pox++)
		{
			putchar(pox);
		}
	putchar('\n');

	}



}
