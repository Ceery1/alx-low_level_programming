#include "main.h"
/**
 *
 *
 *
 */
void print_square(int size)
{
	int n;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (n = 0; n < size; n++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
