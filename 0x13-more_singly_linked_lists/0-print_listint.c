#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * print_listint - function that prints all the elements of a list
 * @h: the pointer to the head of the list
 *
 * Return: the number of nodes*/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t node_count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}

	return (node_count);
}

