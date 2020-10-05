#include "task1.h"

int comp1(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
};

int comp2(const void *a, const void *b)
{
    if (*(double *)a - *(double *)b > 0.0)
        return 1;
    else if (*(double *)a - *(double *)b < 0.0)
        return -1;
    else if (*(double *)a - *(double *)b == 0.0)
        return 0;
};

int comp3(const void *a, const void *b)
{
    return (strcmp(*((char **)a), *((char **)b)));
};

int comp4(const void *a, const void *b)
{
    return (strlen(*((char **)a)) - strlen(*((char **)b)));
};

int comp5(const void *a, const void *b)
{
    unsigned int c = 0, d = 0;
    for (unsigned int i = 0; i < strlen(*((char **)a)); i++)
    {
        if ((*((char **)a))[i] == ' ')
            c++;
    }
    for (unsigned int i = 0; i < strlen(*((char **)b)); i++)
    {
        if ((*((char **)b))[i] == ' ')
            d++;
    }
    return (c - d);
};

int comp6(const void *a, const void *b)
{
    return (((Person *)a)->age - ((Person *)b)->age);
}