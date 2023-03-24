#include "main.h"
/**
 * _isdigit - main function
 * @c: parameter to check
 * Return: 0 is correct
 */
int _isdigit(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
