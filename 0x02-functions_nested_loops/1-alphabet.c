#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z'; c++)
{
_putchar("%c", c);
}
_putchar("\n");
return (0);
}
