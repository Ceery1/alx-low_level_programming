#include "main.h"
#include <stdio.h>
/**
 * _puts - function to call
 * @str: the parameter
 * Return;
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}
