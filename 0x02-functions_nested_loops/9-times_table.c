#include "main.h"

/**
 * times_table - This prints times table up to 9
 *
 * Return: void
 *
 **/

void times_table(void)
{
	int a, x, prod;

	prod = 0;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 9; x++)
		{
			prod = a * x;
			if (x != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if ((prod < 10) && (x != 0))
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}else	
				_putchar((prod % 10) + '0');
		}

		_putchar('\n');
	}
}
