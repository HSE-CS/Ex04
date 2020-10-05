#include "task1.h"
int comp1(const void *a, const void *b)
{
    return *(int *) a - *(int *) b;
}

int comp2(const void *a, const void *b)
{
    double eps = 1e-5;
    if (fabs( *(double *) a - *(double *) b) < eps)
    {
        return 0;
    }
    else if ( *(double *) a - *(double *) b > eps)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int comp3(const void *a, const void *b)
{
    return strcmp(*(char **) a, *(char **) b);
}

int comp4(const void *a, const void *b)
{
    return (int) (strlen(*(char **) a) - strlen(*(char **) b));
}

int comp5(const void *a, const void *b) {
    string a_to_string(*(char**)a);
    string b_to_string(*(char**)b);
    auto count_in_a = count(a_to_string.begin(), a_to_string.end(), ' ');
    auto count_in_b = count(b_to_string.begin(), b_to_string.end(), ' ');

    if (count_in_a > count_in_b)
    {
        return 1;
    }
    else if (count_in_a == count_in_b)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int comp6(const void *a, const void *b) {
    return (int) (((Person *) a) ->age - ((Person *) b) ->age);
}
