//
// Created by Vadim Makarov on 29.09.2020.
//
#include <iostream>
#include <cstring>
#include <task1.h>

int comp1(const void *a, const void *b) {
    return (*(int *) a - *(int *) b);
}

int comp2(const void *a, const void *b) {
    if (*(double *) a > *(double *) b){
        return 666;
    } else if (*(double *) a < *(double *) b){
        return -666;
    } else {
        return 0;
    }
}

int comp3(const void *a, const void *b) {
    return strcmp( *(char **) a, *(char **) b);
}

int comp4(const void *a, const void *b) {
    return strlen(*(char **) a) -  strlen(*(char **) b);
}

int comp5(const void *a, const void *b) {
    int numOfSpacesA = 0, numOfSpacesB = 0;
    for (int i = 0; i < strlen(*(const char **) a); ++i) {
        if ((*(const char **) a)[i] == ' '){
            numOfSpacesA ++;
        }
    }
    for (int i = 0; i < strlen(*(const char **) b); ++i) {
        if ((*(const char **) b)[i] == ' '){
            numOfSpacesB ++;
        }
    }

    return (numOfSpacesA - numOfSpacesB);
}

int comp6(const void *a, const void *b) {
    struct Person personA = (*(Person *) a);
    struct Person personB = (*(Person *) b);
    return (personA.age - personB.age);

}