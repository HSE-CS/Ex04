
#include "task1.h"


int comp1(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int comp2(const void *a, const void *b) {
    if (*(double *) a - *(double *) b > 0.0) {
        return 10;
    } else if (*(double *) a - *(double *) b < 0.0) {
        return -10;
    } else return 0;
}

int comp3(const void *a, const void *b) {
    return (strcmp(*(char **) a, *(char **) b));
}

int comp4(const void *a, const void *b) {
    return (int) (strlen(*(const char **) a) - strlen(*(const char **) b));
}

int comp5(const void *a, const void *b) {
    int c1 = 0, c2 = 0;
    for (int i = 0; i < strlen(*(const char **) a); i++) {
        if ((*(const char **) a)[i] == ' ') {
            c1++;
        }
    }
    for (int i = 0; i < strlen(*(const char **) b); i++) {
        if ((*(const char **) b)[i] == ' ') {
            c2++;
        }
    }
    return c1 - c2;
}

int comp6(const void *a, const void *b) {
    return (int)((*(Person *) a).age - (*(Person *) b).age);
}
