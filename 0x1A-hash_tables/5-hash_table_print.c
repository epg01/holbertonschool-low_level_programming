#include "hash_tables.h"

void print_node(hash_node_t *curr, hash_node_t *ptr);
hash_node_t *find_next(hash_node_t **curr, int *index, int size);

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: Pointer to hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *find1;
	hash_node_t *find2;

	if (!ht || !(ht->array))
		return;

	putchar('{');
	while (index < ht->size - 1)
	{
		find1 = find_next(&(ht->array[index]), (int *)&index, ht->size);
		index++;
		find2 = find_next(&(ht->array[index]), (int *)&index, ht->size);
		print_node(find1, find2);
	}
	putchar('}');
	putchar('\n');
}

/**
 * print_node - Function that prints the content of a linked list.
 * @curr: Pointer current.
 * @ptr: Pointer next.
 */
void print_node(hash_node_t *curr, hash_node_t *ptr)
{
	while (curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if ((curr->next) || (!curr->next && ptr))
			printf(", ");
		curr = curr->next;
	}
}

/**
 * find_next - Function that finds a node that is not null.
 * @curr: Pointer current.
 * @index: Pointer to index.
 * @size: Size hash table.
 * Return: Function that returns a pointer.
 */

hash_node_t *find_next(hash_node_t **curr, int *index, int size)
{
	while (!*curr)
	{
		if (*index == size - 1)
			return (*curr);
		curr++;
		(*index)++;
	}
	return (*curr);
}
