#include "main.h"

/**
  * prime - finds prime numbers
  * @num: number to check whether it is a prime number
  * @i: divisor
  * Return: prime
  */
int prime(int num, int i)
{
	if (num % i == 0)
		return (0);
	if (i * i > num)
		return (1);
	return (prime(num, i + 1));
}

/**
  * is_prime_number - determine if a number is a prime number
  * @n: int number
  * Return: 1 if prime, 0 otherwise
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime(n, i));
}
