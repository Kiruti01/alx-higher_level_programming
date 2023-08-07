#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>


/**
 * struct listint_s - Structure for an integer linked list
 * @n: The integer data of the node
 * @next: Pointer to the next node in the list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all elements of an integer linked list
 * @h: Pointer to the head node of the list
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h);

/**
 * add_nodeint - Adds a new node at the beginning of an integer linked list
 * @head: Pointer to a pointer to the head node
 * @n: Integer value for the new node
 * Return: Pointer to the new head node
 */
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * free_listint - Frees memory allocated for an integer linked list
 * @head: Pointer to the head node of the list to be freed
 */
void free_listint(listint_t *head);

/**
 * check_cycle - Checks if a linked list has a cycle (loop)
 * @list: Pointer to the head node of the list to be checked
 * Return: 0 if no cycle, 1 if cycle is present
 */
int check_cycle(listint_t *list);

#endif /* LISTS_H */
