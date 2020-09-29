#include "task1.h"

using namespace std;

int comp1( const void * a, const void * b ) {
    return ( *( int* )a - *( int* )b );
}

int comp2( const void * a, const void * b ) {
    double c = ( *( double* )a - *( double* )b );
    if (c > 0)
        return 1;
    else
        if (c < 0)
            return -1;
    else
        return 0;
}

int comp3( const void * a, const void * b ) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int comp4( const void * a, const void * b ) {
    return ( strlen(*( const char ** )a) - strlen(*( const char ** )b ));
}

int comp5( const void * a, const void * b ) {
    string str1 = *(const char**)a;
    string str2 = *(const char**)b;
    int c = count(str1.begin(), str1.end(), ' ');
    int d = count(str2.begin(), str2.end(), ' ');
    return ( *( int* )c - *( int* )d );
}

int comp6( const void * a, const void * b ) {
    return (( *( Person* )a).age - (*( Person* )b).age );
}

