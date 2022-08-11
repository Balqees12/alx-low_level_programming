#include "lists.h"

/**
 * print_list - A stringlist funtion to print a list.
 * @h: Argument variable of the function.
 * Return: Amount of nodes counted
 */

size_t print_list(const list_t *h)
{
README.md size_t nodecount = 0;

README.md while (h)
README.md {
README.md README.md if (!h->str)
README.md README.md README.md printf("[0] (nil)\n");
README.md README.md else
README.md README.md README.md printf("[%u] %s\n", h->len, h->str);
README.md README.md h = h->next;
README.md README.md nodecount++;
README.md }

README.md return (nodecount);
}
