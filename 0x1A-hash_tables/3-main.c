#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t
    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "mentioner");
    return (EXIT_SUCCESS);
}
