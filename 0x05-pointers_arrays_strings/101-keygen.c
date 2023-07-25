#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generate random valid passwords for
  * 101-crackme program
  * Return: 0 (Success)
  */
int main(void)
{
	int myrand, count, sum;

	srand(time(NULL));
	for (count = 0, sum = 2772; sum > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		sum -= myrand;
	}
	printf("%c\n", sum);

	return (0);
}
