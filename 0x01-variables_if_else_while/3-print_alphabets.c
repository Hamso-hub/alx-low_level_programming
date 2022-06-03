#include <stdio.h>
/**
 * main - prints alphabets
 * both uppercase and lowercase
 * Return: set to 0
 */



int main(void)
{
	char alph;
	char alphe;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alphe = 'A'; alphe <= 'Z'; alphe++)
	{
		putchar(alphe);
	}

	putchar('\n');
	return (0);

}
