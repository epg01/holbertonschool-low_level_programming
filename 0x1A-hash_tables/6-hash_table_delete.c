#include "hash_tables.h"

/**
 * Delete_Linked_List - Function that Delete all the dinamically allocate
 *                      memory that resides on Nodo.
 * @Nodo: Pointer to Nodo in the linked list.
 */

void Delete_Linked_List(hash_node_t *Nodo)
{
	if (Nodo)
	{
		Delete_Linked_List(Nodo->next);
		free(Nodo->key);
		free(Nodo->value);
		free(Nodo);
	}
}

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Pointer to Hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht && ht->array)
	{
		hash_node_t *Find = NULL;
		unsigned long int index = 0;

		while (index < ht->size - 1)
		{
			Find = find_next(&(ht->array[index]), (int *)&index, ht->size);
			index++;
			if (Find)
				Delete_Linked_List(Find);
			else
			{
				free(ht->array);
				free(ht);
				return;
			}
		}
		free(ht->array);
		free(ht);
	}
}
