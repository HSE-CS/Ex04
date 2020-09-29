#include "task1.h"

int comp1( const void* a, const void* b )
{
    return ( *( int* )a - *( int* )b );
}

int comp2( const void* a, const void* b )
{
    return ( *( double* )a - *( double* )b ) > 0 ? 1 : -1;
}

int comp3(const void *a, const void *b)
{
    return strcmp( *(char **) a, *(char **) b);
}

int comp4(const void *a, const void *b)
{
    return strlen(*(char **) a) -  strlen(*(char **) b);
}

int comp5( const void* a, const void* b )
{
    return 0;
}

int comp6( const void* a, const void* b )
{
    struct Person person_a = (*(Person *) a);
    struct Person person_b = (*(Person *) b);
    return (person_a.age - person_b.age);
}