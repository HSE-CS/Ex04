/*
 * @author Stanislav Stoianov
 */

#include "task1.h"

int comp1(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int comp2(const void *a, const void *b) {
    if (*(double *) a > *(double *) b) return 1;
    else if (*(double *) a < *(double *) b) return -1;
    else return 0;
}

int comp3(const void *a, const void *b) {
    return strcmp(*(char **) a, *(char **) b);
}

int comp4(const void *a, const void *b) {
    return strlen(*(const char **) a) - strlen(*(const char **) b);
}

int comp5(const void *a, const void *b) {
    int res1 = 0;
    int res2 = 0;
    std::string s1 = *(const char **) a;
    std::string s2 = *(const char **) b;
    for (char i : s1) if (i == ' ') res1++;
    for (char i : s2) if (i == ' ') res2++;
    return res1 - res2;
}

int comp6(const void *a, const void *b) {
    return (*(Person *) a).age - (*(Person *) b).age;
}