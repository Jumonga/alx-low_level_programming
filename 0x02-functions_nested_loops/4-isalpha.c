#include "main.h"

/**
 * _isalpha -returns 1 if c is a letter
 *
 * @c: character to be checked if alpha
 *
 * Return: 1 if its letter, 0 otherwise 
 * **/

int _isalpha(int z)
{
	if ((z <= 90) && (z >= 65))
		return (1);
	else if ((z >=97) && (z <= 122))
		return (1);
	else
		return (0);
}
