#include "task1.h"

int comp1( const void* a, const void* b )
{
    return ( *( int* )a - *( int* )b );
}

int comp2( const void* a, const void* b )
{
    return (*(double*)a - *(double*)b) > 0.0 ? 1 : -1;
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
    int num_a = 0;
    int num_b = 0;
    string str_a = *(const char **)a;
    string str_b = *(const char **)b;
    for (int i = 0; i < str_a.length(); i++){
        if (str_a[i] == ' ')
            num_a++;
    }
    for (int i = 0; i < str_b.length(); i++){
        if (str_b[i] ==  ' ')
            num_b++;
    }
    return num_a - num_b;
}

int comp6( const void* a, const void* b )
{
    return (((Person*)a)->age - ((Person*)b)->age);
}