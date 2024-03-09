#include <stdio.h>

int main(int argc, char *argv[])
{
    // Subtract 1 to exclude the program name itself
    printf("%d\n", argc - 1);

    return 0;
}
