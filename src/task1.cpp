//
// Created by jmax on 13.10.2020.
//

#include <cmath>
#include <cstring>
#include "task1.h"

int comp1(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int comp2(const void *a, const void *b) {
    return (int) ceil(*(double *) a - *(double *) b);
}

int comp3(const void *a, const void *b) {
    return strcmp(*(const char **) a, *(const char **) b);
}

int comp4(const void *a, const void *b) {
    return (int) (strlen(*(const char **) a) - strlen(*(const char **) b));
}

static int countSpaces(const char *s) {
    int counter = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ')
            counter++;
    return counter;
}

int comp5(const void *a, const void *b) {
    return countSpaces(*(const char **) a) - countSpaces(*(const char **) b);
}

int comp6(const void *a, const void *b) {
    return (int) (((Person *) a)->age - ((Person *) b)->age);
}