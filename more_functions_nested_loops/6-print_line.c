#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character '_' should be printed
 */
void print_line(int n)
{
<TAB>int i;

<TAB>if (n <= 0)
<TAB>{
<TAB><TAB>_putchar('\n');
<TAB><TAB>return;
<TAB>}

<TAB>for (i = 0; i < n; i++)
<TAB>{
<TAB><TAB>_putchar('_');
<TAB>}
<TAB>_putchar('\n');
}
