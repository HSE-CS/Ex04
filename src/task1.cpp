//
// Created by freeb on 05.10.2020.
//

#include <cmath>
#include "task1.h"

int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}

int comp2( const void* a, const void* b ) {
    double eps = 1e-5;
    if (fabs( *( double * )a - *( double * )b ) < eps) {
        return 0;
    } else if ( *( double * )a - *( double * )b > eps){
        return 1;
    } else {
        return -1;
    }
}

int comp3( const void* a, const void* b ) {
    return strcmp(*(char **)a, *(char **)b);
}

int comp4(const void *a, const void *b) {
    return (int)(strlen(*(char **)a) - strlen(*(char **)b));
}

int comp5(const void *a, const void *b) {
    return (int)(count(*(char **)a, *(char **)a + strlen(*(char **)a), ' ') -
    count(*(char **)b, *(char **)b + strlen(*(char **)b), ' '));
}

int comp6(const void *a, const void *b) {
    return (int)(*(Person *)a).age - (int)(*(Person *)b).age;
}
