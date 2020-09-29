#include <cstring>
#include "task1.h"
int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}
int comp2( const void* a, const void* b ) {
    if(*( double* )a < *( double* )b){
        return -1;
    }else if(*( double* )a > *( double* )b){
        return 1;
    }else{
        return 0;
    }
}
int comp3( const void* a, const void* b ) {
    return strcmp( *(const char* *)a, *(const char* *)b );
}
int comp4( const void* a, const void* b ) {
    return strlen( *(const char* *)a) - strlen( *(const char* *)b);
}
int comp5( const void* a, const void* b ) {
    int spaceA = 0, spaceB = 0;
    for (int i = 0; i < strlen(*(const char* *)a); ++i) {
        if((*(const char**)a)[i] == ' '){
            spaceA++;
        }
    }
    for (int i = 0; i < strlen(*(const char* *)b); ++i) {
        if((*(const char**)b)[i] == ' '){
            spaceB++;
        }
    }
        return spaceA - spaceB;
}
int comp6( const void* a, const void* b ) {
    Person ap = *(Person*)a;
    Person bp = *(Person*)b;
    return (ap.age-bp.age);
}

