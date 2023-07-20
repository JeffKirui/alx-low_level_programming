#include "main.h"

/**
  * more_numbers - prints number 0 to 14, 10 times
  * Description: Can only use _putchar 3 times
  */
void more_numbers(void)
{
	int count = 0, num;

	while (count < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
			num++;
		}
		count++;
		_putchar('\n');
	}
}
