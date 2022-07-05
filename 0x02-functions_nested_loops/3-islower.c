#include "main.h"

/**
 * _islower  - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/

int _islower(int q)
{
	if (q >= 97 && q <= 122)
	       return (1);
	else
		return (0);
}	
