#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	/* Check if the key already exists*/
	tmp_node = ht->array[index];
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key) == 0)
		{
			/* Key found, update the value */
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			if (tmp_node->value == NULL)
				return (0);
			return (1);
		}
		tmp_node = tmp_node->next;
	}

	/* Key not found, add a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	return (1);
}
