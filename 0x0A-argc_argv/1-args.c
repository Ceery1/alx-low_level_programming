#include <stdio.h>
/**
 * main - entry point
 * @argc: number of arguments in argv
 * @argv: array of arguments
 * Return: 0 succes
*/
int main(int argc, char *argv[])
{
	int i, leng = 0;
	(void) argv;


	for (i = 1; i < argc; i++)
	{
		leng++;
	}
	printf("%d\n", leng);
	return (0);
}
