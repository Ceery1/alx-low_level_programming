#include "main.h"
#include <stdio.h>

/**
 * _strlen - function to call
 *
 * @s: parameter to enter
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
