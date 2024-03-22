#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function
 * c: char, i: integer, f: float, s: char *
 */

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char sep = ',';

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                break;
            default:
                sep = 0;
                break;
        }
        if (format[i + 1] && sep)
            printf(", ");
        i++;
    }

    printf("\n");
    va_end(args);
}
