#include <stdio.h>

/**
 * main - printing all alphabets
 * using putchar function
 * Return: set at zero
 */


int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{

		putchar(alphabet);
	}
	putchar('\n');

	return (0);


}
