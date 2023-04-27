#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
  * add_node - insert new node head of list_t
  * @head: head node
  * @str: string
  * Return: the adress of the new element or  NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int count = 0;
	char *s;
	struct list_s *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (0);
	if (str)
	{
		s = strdup(str);
		count = strlen(str);
	}
	else
	{
		count = 0;
		s = 0;
	}
	ptr->str = s;
	ptr->len = count;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
