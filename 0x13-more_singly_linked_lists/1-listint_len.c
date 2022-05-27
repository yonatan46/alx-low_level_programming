<<<<<<< HEAD
#include"lists.h"
#include"stdio.h"
/**
 *listint_len - return length of element
 *
 *@h: argument pass for function
 *
 *Return: size_t
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
=======
#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int cnr = 0;

	tp = h;
	while (tp)
	{
		cnr++;
		tp = tp->next;
	}
	return (cnr);
>>>>>>> 350df5726b6cfac0e65feafeaf746eac4dc11f0f
}
