#include "main.h"
/**
 * _islower - check c is a lowercas
 * @c: to be checked
 * Return: 1 if c is lowercase or 0 if its not
 */



int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
