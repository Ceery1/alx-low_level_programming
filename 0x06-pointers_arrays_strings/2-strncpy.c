#include "main.h"
/**
 * _strncpy - function to call
 * @dest: first parameter
 * @src: second parameter
 * @n: number of char to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
