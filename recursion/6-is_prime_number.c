#include "main.h"

/**
 * prime - Check the code.
 * Description: 'Detect prime number.'
 * @n: is an integer.
 * @i: is an integer equal or bigger than 2.
 * Return: 1 if it is prime else 0.
 */

int prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (prime(n, i + 1));
	}
}
/**
 * is_prime_number - Check the code.
 * Description: 'Returns 1 if the input integer is a prime number,
 * otherwise return 0.'
 * @n: is an integer.
 * Return: 1 and 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}
