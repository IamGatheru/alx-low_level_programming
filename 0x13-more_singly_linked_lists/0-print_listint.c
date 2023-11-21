#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the list
 * Return: the number of nodes
 * Format: see example (0-main.c)
 * You can use printf
 */

size_t print_listint(const listint_t *h)
{
  struct node *ptr;
  ptr =  h;
  while (ptr != NULL)
    {
      printf("%d", ptr-> n);
      ptr = ptr->next;
    }
  return start;
