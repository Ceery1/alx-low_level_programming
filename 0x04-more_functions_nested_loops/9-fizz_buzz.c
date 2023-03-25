#include <stdio.h>
/**
 * main - entry point
 * Return: 0 is correct
 *
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
