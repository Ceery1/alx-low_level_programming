#include "lists.h"
#include <stdio.h>
/**
 * print_list - function to print element of linked list
 * @h: pointer to list to print
 * Return: num of nodes
 *
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	count++;
	return (count);
}
