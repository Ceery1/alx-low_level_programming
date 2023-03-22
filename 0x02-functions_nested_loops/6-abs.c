#include "main.h"
/**
 * _abs - entry point
 * @a: parameter
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (a);
}
