#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* Function prototypes */
int _putchar(char c);
char *_strcat(char *dest, const char *src);
char *_strncat(char *dest, const char *src, int n);
int _strcmp(const char *s1, const char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_strncpy(char *dest, const char *src, int n);
void reverse_array(int *a, int n);
void print_number(int n);

#endif /* MAIN_H */
