#include "hash_tables.h"
void print_node(hash_node_t *curr, hash_node_t *ptr);
hash_node_t *find_next(hash_node_t **curr,int *index, int size);
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	if(!ht || !(ht->array))
		return;
	while (index < ht->size -1)
	{
		if (index == 0)
			putchar('{');
		else
		{
			hash_node_t *find;
			find = find_next(&(ht->array[index + 1]), (int *)&index, ht->size);
			print_node(ht->array[index], find);
		}
		index++;
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
	(*index)++;
	while(!*curr)
	{
		if (*index == size - 1)
			return (*curr);
		curr++;
		(*index)++;
	}
	return (*curr);
}
