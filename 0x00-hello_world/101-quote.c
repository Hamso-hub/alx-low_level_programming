#include <unistd.h>
#include <stdio.h>
 /**
  * main - display using the write function
  *
  * Return - set to one
  */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
