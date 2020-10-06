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
     return ( strcmp(*(const char**)a, *(const char**)b));
     return (strcmp(*((char**)a), *((char**)b)));
 }

 int comp4( const void * a, const void * b ) {
     return ( strlen(*( const char ** )a) - strlen(*( const char ** )b ));
 }

 int comp5( const void * a, const void * b ) {
    std::string str1 = *(const char**)a;
    std::string str2 = *(const char**)b;
    int c = 0;
    int d = 0;
    for (char ch1 : str1) {
        if (ch1 == ' ')
            c += 1;
    }
    for (char ch2 : str2) {
        if (ch2 == ' ')
            d += 1;
    }
    return ( c - d );
}
int comp6( const void * a, const void * b ) {
    return (( *( Person* )a).age - (*( Person* )b).age );
}
