#include "main.h"
/**
 * _strncat - function to call
 * @dest: first parameter
 * @src: second parameter
 * @n: number of bytes to print
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = 0;
	int lensrc = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		lendest++;
	for (i = 0; src[i] != '\0'; i++)
		lensrc++;
	for (i = 0; i < n; i++)
		dest[lendest + i] = src[i];
	return (dest);
}
