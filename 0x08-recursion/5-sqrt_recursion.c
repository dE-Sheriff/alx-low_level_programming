#include "main.h"

int real_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - finds natural square root
 * @n: the num
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}
/**
 * real_sqrt_recursion - finds mathimatical square root
 * @n: num
 * @x: count
 * Return: Square root
 */

int real_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (real_sqrt_recursion(n, x + 1));
}
