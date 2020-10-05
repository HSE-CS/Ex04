#include "task4.h"

int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}

double comp2( const void* a, const void* b ) {
    return ( *( double* )a - *( double* )b );
}
