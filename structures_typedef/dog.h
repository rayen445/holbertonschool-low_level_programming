#ifndef DOG_H
#define DOG_H


struct dog {
    char *name;
    float age ;
    char *owner;
};

/* function prototype */
void print_dog(struct dog *d);

#endif /* DIG_H */
