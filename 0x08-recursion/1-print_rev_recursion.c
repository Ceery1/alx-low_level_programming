#include "main.h"
/**
 * _print_rev_recursion - function to call
 * @s: string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}