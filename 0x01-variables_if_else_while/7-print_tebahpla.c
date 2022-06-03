#include <stdio.h>
/**
 * main - prints aphabets in reverse order
 * Return: set to 0
 */




int main(void)

{
	char rever;

	for (rever = 'z'; rever >= 'a'; rever--)
	{
		putchar(rever);
	}

	putchar('\n');
	return (0);

}
