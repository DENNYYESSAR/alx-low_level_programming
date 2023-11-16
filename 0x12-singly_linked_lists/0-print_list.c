#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: A pointer to the list_t list to be printed.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
   int count = 0;


   while (h)
   {
       if (h->str == NULL)
       {
           printf("[0] (nil)\n");
       }
       else
       {
       printf("[%d] %s\n", h->len, h->str);
       }
       count++;
       h = h->next;
   }
   return (count);
}

