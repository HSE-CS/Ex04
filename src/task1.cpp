#include <math.h>
#include <stdio.h>
#include "task1.h"
#include <iostream>
#include <cstring>

using namespace std;



int comp1(const void *a, const void *b)
{
   return ( *( int* )a - *( int* )b );
}

int comp2(const void *a, const void *b)
{
    return (int)( *( double* )a - *( double* )b);
}

int comp3(const void *a, const void *b)
{
    return strcmp((*(char **)a), (*(char **)b));
}

int comp4(const void *a, const void *b)
{
    return strlen((*(char **)a)) - strlen((*(char **)b));
}
int comp5(const void *a, const void *b)
{
    int c1 = 0;
    int c2 = 0;


   for(int i = 0; i<strlen((*(char **)a)); i++)
       if(((*(char **)a))[i] == ' ')
           c1++;


   for(int i = 0; i<strlen(((*(char **)b))); i++)
       if(((*(char **)b))[i] == ' ')
           c2++;

   return c1 - c2;
}

int comp6(const void *a, const void *b)
{
   return (((Person*)a)->age) - (((Person*)b)->age);
}

