#include "task1.h"

int comp1( const void* a, const void* b){
    return (*( int* )a - *( int* )b);
}

int comp2( const void* a, const void* b){
    if (*( double* )a > *( double* )b)
        return 1;
    if (*( double* )a < *( double* )b)
        return -1;
    return 0;
}

int comp3( const void* a, const void* b){
    return strcmp(*(char**)a, *(char**)b);
}

int comp4(const void* a, const void* b){
    return (strlen(*(char**)a) - strlen(*(char**)b ));
}

int number_of_sp(const void* a){
    int count = 0;
    for (int i = 0; i < strlen(*(char**)a); i++){
        if ((*(char**)a)[i] == ' '){
            count++;
        }
    }
    return count;
}

int comp5(const void* a, const void* b){
    return number_of_sp(a) - number_of_sp(b);
}

int comp6(const void* a, const void* b){
    return ((*(Person*)a).age - (*(Person*)b).age);
}