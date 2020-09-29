#include "task1.h"

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
    double result = (*(double*)a - *(double*)b);

    if (result > 0)
        return 1;
    else if (result < 0)
        return -1;
    else
        return 0;
}

int comp3(const void* a, const void* b) {
    return strcmp(*(const char**)a , *(const char**)b);
}

int comp4(const void* a, const void* b) {
    return (strlen(*(const char**)a) - strlen(*(const char**)b));
}

int comp5(const void* a, const void* b)
{
    char* pa=*(char**)a;
    char* pb = *(char**)b;

    int count_spaces_a=0;
    int count_spaces_b=0;

    for (int i = 0; i < strlen(pa); i++)
        if (pa[i] == ' ')
            count_spaces_a++;

    for (int j = 0; j < strlen(pb); j++)
        if (pb[j] == ' ')
            count_spaces_b++;
    return count_spaces_a - count_spaces_b;
}

int comp6(const void* a, const void* b) {
    return (((struct Person*)a)->age - ((struct Person*)b)->age);
}


