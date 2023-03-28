#include "main.h"
/**
 * puts2 - function to call
 * @str: parameter to print
 *
 */
void puts2(char *str)
{
	int index;
	int length = 0;

	while (str[length] != '\0')
	{
	length++;
	}
	for (index = 0; index < length; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
