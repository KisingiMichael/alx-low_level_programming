#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the hash table
 *
 * Return: pointer of the created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int n = 0;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (; n < size; n++)
	{
		table->array[n] = NULL;
	}
	return (table);
}
