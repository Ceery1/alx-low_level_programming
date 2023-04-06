#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - function to call
 * @n: number to check if prime number or not
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, (n / 2)));
}
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, (i - 1)));
}
