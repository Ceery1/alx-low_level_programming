#include "main.h"
/**
 * _memset - function to call
 * @s: array
 * @b: constant
 * @n: bytes of the memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
