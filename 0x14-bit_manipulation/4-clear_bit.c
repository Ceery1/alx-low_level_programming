#include "main.h"

/**
 * clear_bit - function to call.
 * @n: given number
 * @index: given index
 * Return: 1 if yes, or -1 if no
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ar;

	if (index > 63)
		return (-1);
	ar = 1 << index;
	*n &= ~ar;
	return (1);
}
