#include <cstring>
#include <iostream>
#include "task1.h"
using namespace std;

int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}


int comp2( const void* a, const void* b ) {
    double res = ( *( double* )a - *( double* )b );
    if (res > 0)
        return 1;
    else if (res < 0)
        return -1;
    else
        return 0;
}

int comp3( const void* a, const void* b ) {
    int res =  strcmp(*(const char**)a,  *(const char**)b);
    if (res > 0)
        return 1;
    else if (res < 0)
        return -1;
    else
        return 0;
}

int comp4( const void* a, const void* b) {
    int res =  strlen(*(const char**)a) -  strlen(*(const char**)b);
    if (res > 0)
        return 1;
    else if (res < 0)
        return -1;
    else
        return 0;
}

int comp5( const void* a, const void* b ) {
    int res1 = 0;
    int res2 = 0;
    string s1 = *(const char **)a;
    string s2 = *(const char **)b;
    for (int i = 0; i < s1.length(); i++){
        if (s1[i] == ' ')
            res1++;
    }
    for (int i = 0; i < s2.length(); i++){
        if (s2[i] ==  ' ')
            res2++;
    }
    return res1 - res2;
}

int comp6( const void* a, const void* b ) {
    return (((Person*)a)->age - ((Person*)b)->age);

}