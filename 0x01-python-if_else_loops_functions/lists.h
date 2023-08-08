#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - A singly linked list of integers
 * @n: The integer value stored in the node
 * @next: A pointer to the next node in the list
 *
 * Description: Defines a structure for a singly linked list node that holds an
 * integer value and a pointer to the next node in the list.
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all elements of a linked list of integers
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint_end - Adds new node at end of a lnkd lst of ints
 * @head: A pointer to a pointer to the head of the linked list
 * @n: The integer value to be added to the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - Frees a linked list of integers
 * @head: A pointer to the head of the linked list
 */
void free_listint(listint_t *head);

/**
 * insert_node - Insrts nw nde w/ gvn int val into srtd lnkd lst
 * @head: A pointer to a pntr to the head of lnkd list
 * @number: The integer value to be inserted into the linked list
 *
 * Return: A pointer to the newly inserted node, or NULL on failure
 */
listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
