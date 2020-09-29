#include "task1.h"

int comp1( const void* a, const void* b )
{
    return ( *( int* )a - *( int* )b);
}

int comp2( const void* a, const void* b )
{
    double result = (*( double* )a - *( double* )b);
    if (result > 0.0)
        return 1;
    else if (result < 0.0)
        return -1;
    else
        return 0;
}

int comp3(const void *a, const void *b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}

int comp4(const void *a, const void *b)
{
    return strlen(*(const char**)a) - strlen(*(const char**)b);
}

int comp5( const void* a, const void* b )
{
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    int num1 = 0, num2 = 0, i = 0;

    while (str1[i]){
        if (str1[i] == ' ')
            num1++;
        i++;
    }
    i = 0;
    while (str2[i]){
        if (str2[i] == ' ')
            num2++;
        i++;
    }

    return num1-num2;
}

int comp6( const void* a, const void* b )
{
    return (*(Person*)a).age - (*(Person*)b).age;
}