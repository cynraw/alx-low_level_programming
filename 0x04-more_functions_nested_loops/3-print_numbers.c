#include "main.h"

/**
 * print_numbers - function that prints numbers 0-9
 * Return : returns nothing
 */

void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}

