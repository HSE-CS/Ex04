#include "task1.h"

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
    return (int)(*(double*)a - *(double*)b);
}

int comp3(const void* a, const void* b) {
    return strcmp(*(char**)a, *(char**)b);
}

int comp4(const void* a, const void* b) {
    return (int)(strlen(*(const char**)a) - strlen(*(const char**)b));
}

int comp5(const void* a, const void* b) {
    return (int)(count(*(const char**)a, *(const char**)a + strlen(*(const char**)a), ' ') -
        count(*(const char**)b, *(const char**)b + strlen(*(const char**)b), ' '));
}

int comp6(const void* a, const void* b) {
    return (int)(*(Person*)a).age - (int)(*(Person*)b).age;
}