#include <stdio.h>
/**
 * main - prints combination of 2 numbers
 * Return: set to 0
 */

int main(void)
{
	int v, x;

	for (v = 48; v < 57; v++)
	{
		for (x = 49; x < 58; x++)
		{

			if (x > v)
			{
				putchar(v);
				putchar(x);
				if (v != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
