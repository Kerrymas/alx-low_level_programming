#include "lists.h"

/**
 * listint_len - function that returns the elements in a linked listint_t
 *
 * Return: number of elementsin the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	 while (h != NULL)
	 {
		 count++;
		 h = h->next;
	 }

	 return count;
}
