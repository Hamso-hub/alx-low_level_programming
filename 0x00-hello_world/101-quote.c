#include <unistd.h>
#include <stdio.h>

/**
 * main - start of main program using puts
 * Return: set 0 as return value
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
