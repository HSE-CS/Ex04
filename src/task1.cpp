//
// Created by nikita on 29.09.2020.
//
#include "task1.h"

int comp1(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int comp2(const void *a, const void *b) {
    if (*(double *) a > *(double *) b)
        return 1;
    else if (*(double *) a == *(double *) b)
        return 0;
    else
        return -1;
}

int comp3(const void *a, const void *b) {
    return strcmp(*(const char **) a, *(const char **) b);
}

int comp4(const void *a, const void *b) {
    return strlen(*(const char **) a) - strlen(*(const char **) b);
}

int comp5(const void *a, const void *b) {
    int temp1 = 0, temp2 = 0;
    for (int i = 0; i < strlen(*(const char **) a); i++) {
        if ((*(const char **) a)[i] == 32) {
            temp1++;
        }
    }
    for (int j = 0; j < strlen(*(const char **) b); j++) {
        if ((*(const char **) b)[j] == 32) {
            temp2++;
        }
    }
    return temp1 - temp2;
}

int comp6(const void *a, const void *b) {
    return (int) ((*(Person *) a).age - (*(Person *) b).age);
}