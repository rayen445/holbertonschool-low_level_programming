#include "main.h"

/**
 * main - Entry point, prints FizzBuzz sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<TAB>int i;

<TAB>for (i = 1; i <= 100; i++)
<TAB>{
<TAB><TAB>if ((i % 3 == 0) && (i % 5 == 0))
<TAB><TAB>{
<TAB><TAB><TAB>_putchar('F');
<TAB><TAB><TAB>_putchar('i');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB><TAB>_putchar('B');
<TAB><TAB><TAB>_putchar('u');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB>}
<TAB><TAB>else if (i % 3 == 0)
<TAB><TAB>{
<TAB><TAB><TAB>_putchar('F');
<TAB><TAB><TAB>_putchar('i');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB>}
<TAB><TAB>else if (i % 5 == 0)
<TAB><TAB>{
<TAB><TAB><TAB>_putchar('B');
<TAB><TAB><TAB>_putchar('u');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB><TAB>_putchar('z');
<TAB><TAB>}
<TAB><TAB>else
<TAB><TAB>{
<TAB><TAB><TAB>_putchar(i + '0');
<TAB><TAB>}
<TAB><TAB>if (i < 100)
<TAB><TAB>{
<TAB><TAB><TAB>_putchar(' ');
<TAB><TAB>}
<TAB><TAB>else
<TAB><TAB>{
<TAB><TAB><TAB>_putchar('\n');
<TAB><TAB>}
<TAB>}
<TAB>return (0);
}
