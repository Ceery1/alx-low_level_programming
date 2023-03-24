#include "main.h"
/**
 * _isupper - function to call
 * @c: parameter to define
 * Return: 0 correct
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	return (0);
}
