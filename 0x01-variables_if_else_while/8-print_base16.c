#include <stdio.h>
/**
 * main - prints hexadecimals
 * Return: set to 0
 */

int main(void)
{
	int df;

	int l;

	for (df = 48; df < 58; df++)
	{
		putchar(df);
	}

	for (l = 65; l < 71; l++)
	{
		putchar(l);
	}


	putchar('\n');
	return (0);
}
