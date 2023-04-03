#include "main.h"
/**
* _memcpy - function to use to copy
* @dest: first array
* @src: array to copy on dest
* @n: number of element to copy
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
