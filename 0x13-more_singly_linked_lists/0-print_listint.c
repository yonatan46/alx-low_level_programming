<<<<<<< HEAD
#include"lists.h"
#include<stdio.h>

/**
 * print_listint - print elements of linkedlist
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h)
{
printf("%i\n", h->n);
h = h->next;
i++;
}
return (i);
=======
#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print elements of a singly linked list.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cntr = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		cntr++;
		tp = tp->next;
	}
	return (cntr);
>>>>>>> 350df5726b6cfac0e65feafeaf746eac4dc11f0f
}
