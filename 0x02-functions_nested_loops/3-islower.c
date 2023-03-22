#include "main.h"
#include <stdio.h>
/**
 * _islower - if char is lowercase
 * @c: parameter to be printed
 * Return: 1 if yes 0 if no
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
