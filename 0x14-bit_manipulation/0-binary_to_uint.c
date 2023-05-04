#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert a decimal number to binary
 * @b: string
 * Return:  the converted number
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, i = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		total <<= 1;
		total += b[i] - '0';
		i++;
	}
	return (total);
}
