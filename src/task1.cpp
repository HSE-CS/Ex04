//
// Created by sharg on 29.09.2020.
//
#include "task1.h"
#include <cstring>
int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b) {
    if ((*(double*)a - *(double*)b) < 0)
        return  -1;
    else if ((*(double*)a - *(double*)b) > 0)
        return 1;
    else
        return 0;
}
int comp3(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}
int comp4(const void* a, const void* b) {
    return strlen(*(const char**)a) - strlen(*(const char**)b);
}
int comp5(const void* a, const void* b) {
    int numOfSpacesInFirst = 0, numOfSpacesInSecond = 0;
    for (int i = 0; i < strlen(*(const char**)a); ++i) {
        if ((*(const char**)a)[i] == ' '){
            numOfSpacesInFirst ++;
        }
    }
    for (int i = 0; i < strlen(*(const char**)b); ++i) {
        if ((*(const char**)b)[i] == ' '){
            numOfSpacesInSecond ++;
        }
    }
    return numOfSpacesInFirst-numOfSpacesInSecond;
}
int comp6(const void* a, const void* b) {
    return (*(Person*)a).age - (*(Person*)b).age;
}
