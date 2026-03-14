#include "main.h"

/**
 * _sqrt_helper - Helper function to find natural square root
 * @n: The number to find square root of
 * @guess: Current guess for square root
 *
 * Return: Natural square root or -1 if not found
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find square root of
 *
 * Return: Natural square root of n, or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 2));
}
