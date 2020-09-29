#include "task1.h"
#include <string>
using namespace std;

int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}

int comp2(const void* a, const void* b) {
    double dif = *( double* )a - *( double* )b;
    if (dif > 0)
        return 1;
    else if (dif < 0)
        return -1;
    return 0;
}

int comp3(const void* a, const void* b) {
    return strcmp(*( const char** )a,*( const char** )b);
}

int comp4(const void* a, const void* b){
    string s1 = *( const char** )a;
    string s2 = *( const char** )b;
    return s1.length()-s2.length();
}

int comp5(const void* a, const void* b){
    string s1 = *( const char** )a;
    string s2 = *( const char** )b;
    int sp1=0, sp2=0;
    for (int i=0;i<s1.length();i++){
        if (s1[i] == ' ')
            sp1++;
    }
    for (int i=0;i<s2.length();i++){
        if (s2[i] == ' ')
            sp2++;
    }
    return sp1-sp2;
}

int comp6( const void* a, const void* b ) {
    return ((Person*)a)->age - ((Person*)b)->age ;
}