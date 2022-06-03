#include <stdio.h>
/**
 * main - print all alphabets
 * except e and q
 * Return: set to 0
 */


int main(void)

{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'e' && alp != 'q')
		{

			putchar(alp);

		}
		alp++;
	}

	putchar('\n');
	return (0);
}
