#include "main.h"
/**
 * reverse_array - function to reverse array
 * @a: the array
 * @n: number of element of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
