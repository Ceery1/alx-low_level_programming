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
	int destleng = 0;
	int i;
	int z;
	
	for (i = 0; dest[i] != '\0'; i++)
	{
		destleng++;
	}
	for  (z  = 0; z < n && src[z] != '\0'; z++)
	{
		dest[destleng + z] = src[z];
	}
	return (dest);
}
