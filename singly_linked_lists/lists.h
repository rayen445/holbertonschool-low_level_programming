#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/* Struct for a singly linked list node */
typedef struct list_s
{
    char *str; /* String data */
    unsigned int len; /* Length of the string */
    struct list_s *next; /* Pointer to the next node */
} list_t;

/* Function prototypes */
size_t list_len(const list_t *h);

#endif /* LISTS_H */
