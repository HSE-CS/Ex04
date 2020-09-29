#include <iostream>
#include <string>
#include "task1.h"
#include <cstdlib>

int comp1(const void* a, const void* b)
{
    return (*(int*)a) - (*(int*)b);
};

int comp2(const void* a, const void* b)
{
    double out = ( *( double* )a - *( double* )b );
    if (out > 0)
        return 1;
    else if (out < 0)
        return -1;
    else
        return 0;
}

int comp3(const void* a, const void* b)
{
    return (strcmp(*(const char**)a, *(const char**)b));
}

int comp4(const void* a, const void* b)
{
    return (strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(const void* a, const void* b)
{
   int var1=0;
   int var2=0;
   for(int i=0; i<strlen(*(char**)a); i++)
   {
       if((*(char**)a)[i]==' ')
       {
           var1+=1;
       }
   }
    for(int i=0; i<strlen(*(char**)b); i++)
    {
        if((*(char**)b)[i]==' ')
        {
            var2+=1;
        }
    }
    return var1-var2;
}

int comp6(const void* a, const void* b)
{
    return (((Person*)a)->age - ((Person*)b)->age);
}