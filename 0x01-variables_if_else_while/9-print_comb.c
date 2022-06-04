#include <stdio.h>
/**
 * main - prints 1 to 9 separated by ,
 * Return: set to 0
 */

int main(void)
{
	int yell;

	for (yell = 48; yell < 58; yell++)
	{
		putchar(yell);
		if (yell != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
