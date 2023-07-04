#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function that adds a new node at the beginning of a listint_t
 * @head: the pointer to a pointer to the head of the list
 * @n: the value to be stored in the new node
 *
 * Return: number of elements in the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
