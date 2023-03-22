#include "main.h"
/**
 * print_alphabet - entry point
 * Description: print alphabet
 * Return: 0 is correct
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
