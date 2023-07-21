#include <stdio.h>
#include <math.h>

/**
  * main - main block
  * Description: Find and print the largest prime factor of
  * the number 612852475143
  * Return: 0 (Success)
  */
int main(void)
{
	int i, j, isPrime;
	long num = 612852475143;

	if (num > 0)
	{
		for (i = 2; i <= num; i++)
		{
			if (num % i == 0)
			{
				isPrime = 1;
				for (j = 2; j <= i / 2; j++)
				{
					if (i % j == 0)
					{
						isPrime = 0;
						break;
					}
				}
				if (isPrime == 1)
					printf("%d, ", i);
			}
		}
	}
	return (0);
}
