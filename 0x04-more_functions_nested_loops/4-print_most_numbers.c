#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *                      from 2 and 4 and  you can
 *                      void print_most_numbers(void);only use _putchar twice
 *
 * Return: always 0 (success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchare(num + 48);
	}
	_putchar('\n');
}
