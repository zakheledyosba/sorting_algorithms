#include "sort.h"


/**
 * swap_nodes - swap two nodes in a listint_t doubly-linked list.
 * @node1: A pointer to the first node to swap
 * @node2: The second node to swap
 * @h: A pointer to the head of the doubly-linked list
 */

void swap_nodes(listint_t **h, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;

	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;

	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;

	else
		*h = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;

}

/**
 * insertion_sort_list - "sorts a doubly linked lsit of integers
 * @list: A pointer to the head of a doubly-linked list of integers
 * Description : Swap and prints lists after"
 *
 */

void insertion_sort_list(listint_t **list)
{

	listint_t *current, *temp, *new;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current = (*list)->next; current != NULL; current = temp)
	{
		temp = current->next;
		new = current->prev;
		while (new != NULL && current->n < new->n)
		{
			swap_nodes(list, &new, current);
			print_list((const listint_t *)*list);
		}
	}
}
