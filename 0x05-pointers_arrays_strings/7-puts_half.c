#include "main.h"
/**
 *puts_half - function to call
 *@str: paramater to print
 *
 */
void puts_half(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 1)
	{
		i = (len - 1) / 2;
		i++;
	}
	else
	{
		i = len / 2;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
