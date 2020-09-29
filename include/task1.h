#ifndef task1_h
#define task1_h

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

struct Person
{
    string name;
    unsigned age;
};

int comp1( int* a, int* b );
int comp2( double* a, double* b );
int comp3( string * a, string * b );
int comp4( string * a, string * b );
int comp5( string * a, string * b );
int comp6( Person * a, Person * b );

#endif
