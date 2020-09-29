#include "task1.h"

using namespace std;

int comp1( int* a, int* b ) {
    return ( *( unsigned int* )a - *( unsigned int* )b );
}

int comp2( double* a, double* b ) {
    return ( *( double* )a - *( double* )b );
}

int comp3( string * a, string * b ) {
    return ( *( char** )a - *( char** )b );
}

int comp4( string * a, string * b ) {
    return ( *( unsigned int* )a->length() - *( unsigned int* )b->length() );
}

int comp5( string * a, string * b ) {
    unsigned int c = count(a->begin(), a->end(), ' ');
    unsigned int d = count(b->begin(), b->end(), ' ');
    return ( *( int* )c - *( int* )d );
}

int comp6( Person * a, Person * b ) {
    return ( *( int* )a->age - *( int* )b->age );
}

