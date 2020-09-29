#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include "task1.h"

using namespace std;

int comp1(const void* a, const void* b) {

    return (*(int*)a - *(int*)b);

}


int comp2(const void* a, const void* b) {

    double c = (*(double*)a - *(double*)b);
    if (c > 0)
        return 1;
    else 
        if (c < 0)
            return -1;
    else
        return 0;

}

int comp3(const void* a, const void* b) {

    return strcmp(*(const char**)a, *(const char**)b);

}

int comp4(const void* a, const void* b) {

    return (strlen(*(const char**)a) - strlen(*(const char**)b));

}

int comp5(const void* a, const void* b) {

    int count1 = 0;
    int count2 = 0;
    std::string s1 = *(const char**)a;
    std::string s2 = *(const char**)b;

    for (char i : s1) {
        if (i == ' ')
            count1 = count1 + 1;
    }

    for (char j : s2) {
        if (j == ' ')
            count2 = count2 + 1;
    }

    return (count1 - count2);

}

int comp6(const void* a, const void* b) {

    return ((*(Person*)a).age - (*(Person*)b).age);

}