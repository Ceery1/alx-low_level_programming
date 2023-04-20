#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns sum of its parameters
 * @n: the num of parameter to pass
 * @...: number of parameter to sum
 * Return: s
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		s += x;
	}

	va_end(args);

	return (s);
}
