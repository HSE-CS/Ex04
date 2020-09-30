#ifndef TASK1_CPP
#define TASK1_CPP

#include "task1.h"

int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}

int comp2( const void* a, const void* b ) {
    double temp = ( *( double* )a - *( double* )b );
    if (temp > 0.0)
        return 1;
    return 0;
}

int comp3( const void* a, const void* b ){
    return strcmp(*(char**)a, *(char**)b);
}

int comp4( const void* a, const void* b ){
    return (strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5( const void* a, const void* b ){
    return (charCounter(*(char**)a, ' ') - charCounter(*(char**)b, ' '));
}

int comp6( const void* a, const void* b ){
    return (((Person *)a)->age - ((Person *)b)->age);
}

int charCounter(char *str, char c){
    int counter = 0;
    for (int i = 0; i < strlen(str); ++i)
        if (str[i] == c)
            ++counter;
    return counter;
}

#endif // TASK1_CPP

