#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: number of arguments in argv
* @argv: array of arguments
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	char k;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		k = *argv[i];
		if (k < 48 || k > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
