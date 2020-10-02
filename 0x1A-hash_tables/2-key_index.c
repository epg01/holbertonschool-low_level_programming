#include "hash_tables.h"
/**
 * key_index - index correspondent to pair key/value
 * @Key: Key of the hash table.
 * @Size: size of hash table
 *
 * Return: unsigned long int equivalent to key
 */
unsigned long int key_index(const unsigned char *Key, unsigned long int Size)
{
	return (hash_djb2(Key) % Size);
}
