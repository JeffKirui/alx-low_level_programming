#include "hash_tables.h"

/**
  * key_index - gives the index of a key
  * @key: key of the of the hash
  * @size: size of the array
  * Return: index at which the key/value pair is stored
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_num, index;

	hashed_num = hash_djb2(key);
	index = hashed_num % size;
	return (index);
}
