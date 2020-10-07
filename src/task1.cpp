#include <iostream>
#include "task1.h"


int comp1(const void *first, const void *second) {
    return (*(int *) first - *(int *) second);
}

int comp2(const void *first, const void *second) {
    if (*(double *) first - *(double *) second > 0.0) {
        return 10;
    } else if (*(double *) first - *(double *) second < 0.0) {
        return -10;
    } else return 0;
}

int comp3(const void *first, const void *second) {
    return (strcmp(*(char **) first, *(char **) second));
}

int comp4(const void *first, const void *second) {
    return (int) (strlen(*(const char **) first) - strlen(*(const char **) second));
}

int comp5(const void *first, const void *second) {
    int first_cnt = 0, second_cnt = 0;
    for (int i = 0; i < strlen(*(const char **) first); i++) {
        if ((*(const char **) first)[i] == ' ') {
            first_cnt++;
        }
    }
    for (int i = 0; i < strlen(*(const char **) second); i++) {
        if ((*(const char **) second)[i] == ' ') {
            second_cnt++;
        }
    }
    return first_cnt - second_cnt;
}

int comp6(const void *first, const void *second) {
    return (int)((*(Person *) first).age - (*(Person *) second).age);
}