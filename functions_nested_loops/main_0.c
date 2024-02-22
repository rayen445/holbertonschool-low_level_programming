#include "main.h"
#include <stdio.h>

/**
 * test_islower - test _islower function
 * Return: 0
 */
int test_islower(void)
{
    int r;
    int n;

    n = 'a';
    r = _islower(n);
    printf("%c: %d\n", n, r);
    n = 'H';
    r = _islower(n);
    printf("%c: %d\n", n, r);
    n = 108;
    r = _islower(n);
    printf("%c: %d\n", n, r);
    return (0);
}
