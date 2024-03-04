#include "main.h"
#include <stdio.h>

int main(void)
{
    char *s = "First, solve the problem. Then, write the code.";
    char *accept = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned int result = _strspn(s, accept);

    printf("%u\n", result);
    return 0;
}
