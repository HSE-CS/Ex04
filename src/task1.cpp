#include "task1.h"


int comp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int space_counter(char* a)
{
    int length = strlen(a);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (a[i] == ' ');
        count = count + 1;
    }
    return count;
};

int comp1(const void* a, const void* b)
{
    if (*(int*)a == *(int*)b) return 0;
    if (*(int*)a > *(int*)b) return 1;
    if (*(int*)a < *(int*)b) return -1;
};

int comp2(const void* a, const void* b)
{
    if (*(double*)a == *(double*)b) return 0;
    if (*(double*)a > *(double*)b) return 1;
    if (*(double*)a < *(double*)b) return -1;
};

int comp3(const void* a, const void* b)
{
    return strcmp(*(char **)a, *(char **)b);
};

int comp4(const void* a, const void* b)
{
    if (strlen(*(char **)a) == strlen(*(char **)b)) return 0;
    if (strlen(*(char**)a) > strlen(*(char**)b)) return 1;
    if (strlen(*(char**)a) < strlen(*(char**)b)) return -1;
};

int comp5(const void* a, const void* b)
{
    int amount_a = space_counter(*(char**)a);
    int amount_b = space_counter(*(char**)b);

    if (amount_a == amount_b) return 0;
    if (amount_a > amount_b) return 1;
    if (amount_a < amount_b) return -1;
};

int comp6(const void* a, const void* b)
{
    if ((*(Person*)a).age == (*(Person*)a).age) return 0;
    if ((*(Person*)a).age > (*(Person*)a).age) return 1;
    if ((*(Person*)a).age < (*(Person*)a).age) return -1;
};