#include "hash_tables.h"

void print_node(hash_node_t *curr, hash_node_t *ptr);
hash_node_t *find_next(hash_node_t **curr,int *index, int size);

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *find1;
	hash_node_t *find2;

	if(!ht || !(ht->array))
		return;

	putchar('{');
	while (index < ht->size -1)
	{
		find1 = find_next(&(ht->array[index]), (int *)&index, ht->size);
		index++;
		find2 = find_next(&(ht->array[index]), (int *)&index, ht->size);
		print_node(find1, find2);
	}
	putchar('}');
	putchar('\n');
}
void print_node(hash_node_t *curr, hash_node_t *ptr)
{
	while(curr)
	{
		printf("'%s': '%s'", curr->key, curr->value);
		if ((curr->next) || (!curr->next && ptr))
			printf(", ");
		curr = curr->next;
	}
}
hash_node_t *find_next(hash_node_t **curr,int *index, int size)
{
	while(!*curr)
	{
		if (*index == size - 1)
			return (*curr);
		curr++;
		(*index)++;
	}
	return (*curr);
}
