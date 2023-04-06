#include "main.h"
int real_prime(int n, int i);

/**
 * i_prime_number -function to check interger
 *
 * @n: number
 *
 * Return:prime number
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (real_prime(n, n - 1));
}


/**
 * real_prime - fnction to find prime
 * @n: prime number
 * @i: iterations
 *
 * Return: a prime number
 */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (real_prime(n, i - 1));

}
