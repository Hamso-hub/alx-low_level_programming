#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 * Return: set to 0
 */

int main(void)
{
	long int i, b, c, fry;

	b = 1;
	c = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		fry = b + c;
		b = c;
		c = fry;
	}
	return (0);
}
