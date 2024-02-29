/*
 * File: 9-fizz_buzz.c
 * Auth: ChatGPT
 * Desc: A program that prints the numbers from 1 to 100, followed by a new line.
 *       For multiples of three, it prints "Fizz" instead of the number.
 *       For multiples of five, it prints "Buzz".
 *       For numbers which are multiples of both three and five, it prints "FizzBuzz".
 */

#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz");
        }
        else
        {
            printf("%d", i);
        }

        if (i != 100)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return (0);
}
