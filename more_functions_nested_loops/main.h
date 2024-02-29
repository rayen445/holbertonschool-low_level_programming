#include "main.h"  /* Add this line to include the header file */
#include <stdio.h> /* Include the necessary header file */

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
