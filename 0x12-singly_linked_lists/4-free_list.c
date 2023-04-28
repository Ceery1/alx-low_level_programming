#include "lists.h"
#include <stdlib.h>

/**
  * free_list - free
  * @head: head
  *
  */
void free_list(list_t *head)
{
	list_t *on, *off;

	on = head;
	while (on)
	{
		off = on->next;
		free(on->str);
		free(on);
		on = off;
	}
}
