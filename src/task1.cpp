#include "../include/task1.h"
#include <cstring>
#include <iostream>
using namespace std;

int comp1(const void *a, const void *b)
{ 
    int l = *(int*)a; 
    int r = *(int*)b;
    return (l - r); 
} 

int comp2(const void *a, const void *b)
{ 
    int l = *(double*)a; 
    int r = *(double*)b;
    return (l - r); 
} 

int comp3(const void *a, const void *b)
{ 
    char* l = *((char**)a); 
    char* r = *((char**)b);
    return strcmp(l, r);
    
} 

int comp4(const void *a, const void *b)
{ 
    char* l = *((char**)a); 
    char* r = *((char**)b);
    return (strlen(l) - strlen(r)); 
} 

int comp5(const void *a, const void *b)
{ 
    int l = 0;
    int r = 0;
    char *s1 = *((char**)a);
    char *s2 = *((char**)b);
    for(int i = 0; i < (int)strlen(s1); i++)
    {
        if (s1[i] == ' ')
        {
            l++;
        }
    }

    for(int i = 0; i < (int)strlen(s2); i++)
    {
        if (s2[i] == ' ')
        {
            r++;
        }
    }
    return (l - r); 
} 

int comp6(const void *a, const void *b)
{ 
    return ((Person *)a)->age - ((Person *)b)->age; 
} 