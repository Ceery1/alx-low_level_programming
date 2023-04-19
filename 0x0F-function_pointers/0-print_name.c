#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function to call by pointer
 * @name: name to print
 * @f: ptr to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
