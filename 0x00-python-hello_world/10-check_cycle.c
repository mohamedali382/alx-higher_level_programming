#include"lists.h"

/**
 * check_cycle - check if this list is cycle
 * @list: the list to be checked
 * Return: 0 or 1
*/

int check_cycle(listint_t *list)
{
	listint_t *first, *second;

	second = list;
	first = list;

	while (first && first->next && second->next)
	{
		second = second->next;
		first = first->next;
		if (first == second)
			return (1);
	}
	return (0);
}
