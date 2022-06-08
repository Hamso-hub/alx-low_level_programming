#include "main.h"

/**
 *  _isalpha - checks if c is an alphabet
 * @c: to be checked
 * Return: set to 1 if alphabet else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
