#include "main.h"

/**
 * is_prime_number - check if n is prime number
 * @n: the num
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: the int
 * @x: count
 *
 * Return: int
 */

int check_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
