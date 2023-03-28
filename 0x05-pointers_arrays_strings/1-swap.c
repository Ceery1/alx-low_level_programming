#include "main.h"
/**
 * swap_int - functon to call
 * @a: first parameter
 * @b: second parameter
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
