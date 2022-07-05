#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 **/
void print_alphabet_x10(void)
{
	int t;
	for (t = '0'; t <= '9'; t++)
	{
		print_alphabet();
	}
}
