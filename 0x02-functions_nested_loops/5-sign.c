#include "main.h"
/**
 * print_sign - entry point
 * @n: parameter to be checked
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
