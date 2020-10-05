#include <iostream>
#include <cstring>
#include "task1.h"

int comp1 (const void* a, const void* b) 
{
    return (*(int*)a - *(int*)b);
}

int comp2 (const void* a, const void* b) 
{
    if (*(double*)a > * (double*)b) 
    {
        return 777;
    }
    else if (*(double*)a < *(double*)b) 
    {
        return -777;
    }
    else
    {
        return 0;
    }
}

int comp3 (const void* a, const void* b) 
{
    return strcmp (*(char**)a, *(char**)b);
}

int comp4 (const void* a, const void* b) 
{
    return strlen(*(char**)a) - strlen(*(char**)b);
}

int comp5 (const void* a, const void* b) 
{
    int Spaces1 = 0, Spaces2 = 0;
    for (int i = 0; i < strlen(*(const char**)a); ++i)
    {
        if ((*(const char**)a)[i] == ' ')
        {
            Spaces1++;
        }
    }
    for (int i = 0; i < strlen(*(const char**)b); ++i)
    {
        if ((*(const char**)b)[i] == ' ') 
        {
            Spaces2++;
        }
    }

    return (Spaces1 - Spaces2);
}

int comp6 (const void* a, const void* b) {
    struct Person per1 = (*(Person*)a);
    struct Person per2 = (*(Person*)b);
    return (per1.age - per2.age);

}