#include <iostream>
#include "task1.h"
#include <string>
#include <cstring>

using namespace std;

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
};

int comp2(const void* a, const void* b) {
    if (*(double*)a - *(double*)b > 0)
        return 1;
    else if (*(double*)a - *(double*)b < 0)
        return -1;
    else if (*(double*)a - *(double*)b == 0)
        return 0;
};

int comp3(const void* a, const void* b) {
    return(strcmp((*((char**)a)), (*((char**)b))));
};

int comp4(const void* a, const void* b) {
    return (strlen(*((char**)a)) - strlen(*((char**)b)));
};

int comp5(const void* a, const void* b) {
    unsigned int n = 0, m = 0;
    for (unsigned int i = 0; i < strlen(*((char**)a)); i++)
    {
        if ((*((char**)a))[i] == ' ')
            n++;
    }
    for (unsigned int i = 0; i < strlen(*((char**)b)); i++)
    {
        if ((*((char**)b))[i] == ' ')
            m++;
    }
    return (n - m);
};

int comp6(const void* a, const void* b) {
    return (((Person*)a)->age - ((Person*)b)->age);
};