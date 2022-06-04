#include <stdio.h>
/**
 * main - prints hexadecimals
 * Return: set to 0
 */

int main(void)
{
	int df;

	char l;

	for (df = 48; df < 58; df++)
	{
		putchar(df);
	}

	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}


	putchar('\n');
	return (0);
}
