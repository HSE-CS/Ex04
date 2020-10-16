#include "task1.h"


int comp1(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b)
{
    double res = *(double*)a - *(double*)b;
    if (res > 0.0) {
        return 1;
    }
    else if (res < 0.0) {
        return -1;
    }
    else return 0;
}

int comp3(const void* a, const void* b)
{
    return (strcmp(*(char**)a, *(char**)b));
}

int comp4(const void* a, const void* b)
{
    return (strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(const void* a, const void* b)
{
    string str_first(*(char**)a);
    string str_second(*(char**)b);
    return (count(str_first.begin(), str_first.end(), ' ') - count(str_second.begin(), str_second.end(), ' '));
}

int comp6(const void* a, const void* b)
{
    return ((*(Person*)a).age - (*(Person*)b).age);
}