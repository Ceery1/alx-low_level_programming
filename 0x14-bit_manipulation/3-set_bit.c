#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: given number
 * @index: index
 *
 * Return: 1 if it yes, or -1 if no
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n |= m;
	return (1);
}
