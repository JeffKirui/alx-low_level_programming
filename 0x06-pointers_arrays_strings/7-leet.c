#include "main.h"

/**
  * leet - encode a string into 1337
  * @s: string
  * Return: encode string `s`
  */
char *leet(char *str)
{
	char c[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == c[j])
			{
				*(str + i) = n[j];
			}
		}
		i++;
	}

	return (str);
}
