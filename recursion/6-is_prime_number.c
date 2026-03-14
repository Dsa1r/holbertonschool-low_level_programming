#include "main.h"

/**
 * is_prime_helper - Helper function to check if number is prime
 * @n: The number to check
 * @divisor: Current divisor to test
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_helper(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if input integer is prime, 0 otherwise
 * @n: The number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime_helper(n, 2));
}
