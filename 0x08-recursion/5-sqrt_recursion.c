#include "main.h"

/**
  * find_sqrt - returns natural square root of a number
  * @num: The number
  * @root: The number to test for square root
  * Return: square root
  */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
/**
  * _sqrt_recursion - return the natural square root of a number
  * @n: int number
  * Return: If no natural square root, return -1. Else return natural
  * square root
  */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
