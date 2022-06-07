#include "main.h"
/**
 * void print_alphabet_x10(void) - prinnts alphabets x10
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
